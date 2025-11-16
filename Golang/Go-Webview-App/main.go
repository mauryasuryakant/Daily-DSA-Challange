package main

import (
	"path/filepath"

	webview "github.com/webview/webview_go"
)

func main() {
	w := webview.New(true)
	defer w.Destroy()

	w.SetTitle("My Local HTML App")
	w.SetSize(600, 400, webview.HintNone)

	// convert local file to file:/// path
	path, _ := filepath.Abs("ui/index.html")
	w.Navigate("file:///" + path)

	w.Run()
}
