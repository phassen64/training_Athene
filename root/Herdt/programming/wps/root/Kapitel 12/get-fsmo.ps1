# einfaches Skript zur Ermittlung der Betriebsmasterrollen
Write-Host "`nBetriebsmasterrollen der aktuellen Gesamtstruktur:" -NoNewline
Get-ADForest | Format-List –Property DomainNamingMaster, SchemaMaster
Write-Host "Betriebsmasterrollen der aktuellen Domäne:" -NoNewline
Get-ADDomain | Format-List –Property InfrastructureMaster, PDCEmulator, RIDMaster