if ((Get-WmiObject win32_operatingSystem).caption -match "Server")
{
    Import-Module -Name ServerManager

    $voll = Get-WindowsFeature Server-Gui-Shell
    $teil = Get-WindowsFeature Server-Gui-Mgmt-Infra

    if ($teil.InstallState -eq "Installed")
    {
        if ($voll.InstallState -eq "Installed")
        {
            Write-Host "Sie arbeiten an einem Server mit VOLLSTÄNDIGER GUI.`nInstalliert:"
            Write-Host $voll.Name
            Write-Host $teil.Name
        }
        else
        {
            Write-Host "Sie arbeiten an einem Server mit verminderter Grafikfähigkeit (MINIMAL SERVER INTERFACE).`nInstalliert:"
            Write-Host $teil.Name
        }
    }
    else
    {
        Write-Host "Sie arbeiten an einem Server mit SERVER CORE-Oberfläche."
    }
}
else
{
    Write-Host "Sie verwenden kein Windows Server-Betriebssystem."
}