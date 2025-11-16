@"
package main

import (
    "github.com/webview/webview"
)

func main() {
    w := webview.New(true)
    defer w.Destroy()
    w.SetTitle("My First Webview App")
    w.SetSize(600, 400, webview.HintNone)
    w.Navigate("https://example.com")
    w.Run()
}
"@ | Out-File -Encoding utf8 main.go
