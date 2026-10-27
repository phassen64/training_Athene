Function Get-PSShell 
{
	$Pfad = "HKLM:\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Winlogon"
	(Get-ItemProperty -Path $Pfad -Name Shell).Shell
	
}
Function Set-PSShell ([switch]$Aus)
{
	$Pfad = "HKLM:\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Winlogon"
	$Wert = 'PowerShell.exe -noExit -Command "Set-Location $HOME"'
	$Referenz = Get-PSShell
    If($Aus)
	{
		$Wert = 'explorer.exe'
	}
	If($Referenz -ne $Wert)
    {
        Set-ItemProperty -Path $Pfad -Name Shell -Value $Wert -Confirm:$False
	    Restart-Computer -Force
    }
    Else
    {
        Write-Host "Werte identisch, keine Aktion nötig."
    }
}