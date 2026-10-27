Get-Process | where-Object CPU -GT 10
Get-Process | where-Object {$PSitem.CPU -GT 10}
Get-Process | where-Object {$_.CPU -GT 10 -and $_.Handles -lt 1000}

