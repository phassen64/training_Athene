$os = Get-ADComputer -Filter {OperatingSystem -Like "Windows Server*"}
Import-Module -Name ServerManager
ForEach ($Rechner in $os.Name)
{
    #Import-Module -Name ServerManager

    $voll = Get-WindowsFeature Server-Gui-Shell -ComputerName $Rechner
    $teil = Get-WindowsFeature Server-Gui-Mgmt-Infra -ComputerName $Rechner

    if ($teil.InstallState -eq "Installed")
    {
        if ($voll.InstallState -eq "Installed")
        {
            Write-Host "===`nServer $Rechner arbeitet mit VOLLSTÄNDIGER GUI.`nInstalliert:"
            Write-Host $voll.Name
            Write-Host $teil.Name
        }
        else
        {
            Write-Host "===`nServer $Rechner arbeitet mit verminderter Grafikfähigkeit (MINIMAL SERVER INTERFACE).`nInstalliert:"
            Write-Host $teil.Name
        }
    }
    else
    {
        Write-Host "===`nServer $Rechner hat eine SERVER CORE-Oberfläche."
    }
}