Function Set-PSShell ([switch]$Aus)
{
	$Pfad = "HKLM:\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Winlogon"
	$Wert = 'PowerShell.exe -noExit -Command "Set-Location $HOME"'
	If($Aus)
	{
		$Wert = 'explorer.exe'
	}
	Set-ItemProperty -Path $Pfad -Name Shell -Value $Wert -Confirm:$False
	Restart-Computer -Force
}