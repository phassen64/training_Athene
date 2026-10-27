#Vollständig ==> Minimal Server Interface
Function Set-Full2Mini
{
    Import-Module ServerManager
    Uninstall-WindowsFeature Server-Gui-Shell -Restart
}

#Vollständig ==> Server Core
Function Set-Full2Core
{
    Import-Module ServerManager
    Uninstall-WindowsFeature Server-Gui-Shell
    Uninstall-WindowsFeature Server-Gui-Mgmt-Infra -Restart
}

#Minimal Server Interface ==> Vollständig
Function Set-Mini2Full
{
    Import-Module ServerManager
    Install-WindowsFeature Server-Gui-Shell -Restart
}

#Minimal Server Interface ==> Server Core
Function Set-Mini2Core
{
    Import-Module ServerManager
    Uninstall-WindowsFeature Server-Gui-Mgmt-Infra -Restart
}

#Server Core ==> Vollständig
Function Set-Core2Full
{
    Import-Module ServerManager
    Install-WindowsFeature Server-Gui-Mgmt-Infra
    Install-WindowsFeature Server-Gui-Shell -Restart
}

#Server Core ==> Minimal Server Interface
Function Set-Core2Mini
{
    Import-Module ServerManager
    Install-WindowsFeature Server-Gui-Mgmt-Infra -Restart
}