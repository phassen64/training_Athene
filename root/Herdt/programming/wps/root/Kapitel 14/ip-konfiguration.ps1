# Variablendefinitionen - IP-Adresse, CIDR-Masek, Router und DNS1
$Adapter = "Ethernet"      # oder automatisch bei nur einem Adapter: (Get-NetAdapter).InterfaceAlias
$Ip4Address = "192.168.100.10"
$Ip4Prefix = "24"
$Ip4Gateway = "192.168.100.1"
$Ip4DnsPrimary = "192.168.100.10"

#IP-Adresse, Sunetmask und Standardgateway eintragen
New-NetIPAddress -InterfaceAlias $Adapter -IPAddress $Ip4Address -PrefixLength $Ip4Prefix -DefaultGateway $Ip4Gateway

#DNS-Server eintragen
Set-DnsClientServerAddress -InterfaceAlias $Adapter -ServerAddresses $Ip4DnsPrimary

#Überprüfung, ob alles funktioniert hat
#Get-NetIPConfiguration –InterfaceAlias "Ethernet"