# Vorteile PowerShell 7

# 1. Ping
Test-Connection -ComputerName 10.0.0.9                  # PS5: Error, PS7: Time Out, Unreachable etc...

# 2. CSV-Dateien
Get-LocalUser | Export-Csv -Path $home\localuser.csv -Force    # PS5: Mit Type-Information, PS7: Ohne
notepad $home\localuser.csv

# 3. Chain Operators
# && Only executed, if the first command was successful
Get-ChildItem C:\notthere -ErrorAction SilentlyContinue && 'Not there'
Get-ChildItem C:\Windows -ErrorAction SilentlyContinue && 'There'
# || Only executed if the first command was unsuccessful
Get-ChildItem C:\notthere -ErrorAction SilentlyContinue || 'Not there'
Get-Process mspaint -ErrorAction SilentlyContinue || Start-Process mspaint

# 4. Foreach-Object -Parallel
# PS7

Measure-Command {$Test | ForEach-Object -Parallel {Test-Connection -TargetName $_}} |
Select-Object -Property @{n = 'Foreach-Objec$Test = 'sid-500.com','orf.at','8.8.8.8','cnn.com't -Parallel (s)'; e = {$_.Seconds}}
# PS5
$Test = 'sid-500.com','orf.at','8.8.8.8','cnn.com'
Measure-Command  {$Test | ForEach-Object {Test-Connection -Computername $_}} |
Select-Object -Property @{n = 'Foreach-Object (s)'; e = {$_.Seconds}}

# 5. Ternary Operators
(Test-Path C:\gibtesnicht) ? 'Gibt es' : 'Gibt es nicht'

# 6. Neue Cmdlets
Get-Error
cd -
Get-Uptime
Get-Service | Where-Object -Not 'DependentServices'

# 7. Neue Variablen
Get-Variable | Select-Object -ExpandProperty Name | Out-File $home\ps5var.txt # In PS5 ausfuehren!
Get-Variable | Select-Object -ExpandProperty Name | Out-File $home\ps7var.txt # In PS7 ausfuehren!
Compare-Object -ReferenceObject (Get-Content $home\ps5var.txt) `
-DifferenceObject (Get-Content $home\ps7var.txt)

# 8.Null-Coalescing Operators
$null ?? 'Wert ist null.'
0 ?? 'Wert ist null.'
# Existiert die Datei? Nein, dann erstelle sie
(Get-ChildItem $home\log.txt -ErrorAction SilentlyContinue) ??
(New-Item -ItemType File -Path $home\log.txt -Force)
# Ist das Exchange Online Modul installiert? Wenn nein, dann ...
(Get-Module -Name 'ExchangeOnlineManagement' -ListAvailable) ??
(Install-Module -Name 'ExchangeOnlineManagement' -Confirm)
# Prozess gestartet ? Wenn nein, dann ...
(Get-Process -Name notepad -ErrorAction SilentlyContinue) ??
(Start-Process notepad)

# 9. Set-Location
Set-Location C:\Windows\System32
Set-Location # zum Home Drive

# 10. PSStyle (nur ab PowerShell 7.2)
$PSStyle
$PSStyle.Underline
$msg = "Could not find part of path: {0}{1}{2}{3}" -f $psstyle.Italic,$psstyle.Background.Cyan,"c:\work",$psstyle.Reset
Write-Warning $msg
 <# Progress Bar in PowerShell 5.1 und PowerShell 7 ist grafisch unterschiedlich.
 $PSStyle.Progress (Standard PS7: Minimal)
 $PSStyle.Progress.View = 'Classic' (Ansicht wie bei PS5.1)
 #>


