package main

import (
	"path/filepath"
	"syscall"
	"unsafe"

	webview "github.com/webview/webview_go"
)

// Load and apply .ico to window
func setWindowIcon(hwnd uintptr, iconPath string) {
	fullPath, _ := filepath.Abs(iconPath)

	loadImage := syscall.NewLazyDLL("user32.dll").NewProc("LoadImageW")
	hIcon, _, _ := loadImage.Call(
		0,
		uintptr(unsafe.Pointer(syscall.StringToUTF16Ptr(fullPath))),
		1, // IMAGE_ICON
		0,
		0,
		0x10, // LR_LOADFROMFILE
	)

	sendMsg := syscall.NewLazyDLL("user32.dll").NewProc("SendMessageW")
	sendMsg.Call(hwnd, 0x80, 1, hIcon) // big icon
	sendMsg.Call(hwnd, 0x80, 0, hIcon) // small icon
}

func main() {
	w := webview.New(true)
	defer w.Destroy()

	w.SetTitle("Ayush Desktop App")
	w.SetSize(800, 500, webview.HintNone)

	// Load local HTML
	htmlPath, _ := filepath.Abs("ui/index.html")
	w.Navigate("file:///" + htmlPath)

	// Set icon after window exists
	go func() {
		raw := w.Window()                     // unsafe.Pointer
		hwnd := uintptr(raw)                  // convert → uintptr
		setWindowIcon(hwnd, "assets/app.ico") // now correct
	}()

	w.Run()
}
