$DNDomain = "OU=Firma,DC=herdt,DC=zwo"

$ImportOU = Import-Csv .\OU-Vorlage.csv -UseCulture
$Struktur = @("Verwaltung","Einkauf","Produktion","Verkauf","Leitung")

foreach ($NeueOU in $ImportOU)
{
    New-ADOrganizationalUnit -Name $NeueOU.Name -Path $DNDomain -Description $NeueOU.Description
    $SubPath = "OU=" + $NeueOU.Name + "," + $DNDomain
    foreach ($Eintrag in $Struktur)
    {
        New-ADOrganizationalUnit -Name ($NeueOU.Sto + "-" + $Eintrag) -Path $SubPath -Description "Abteilung $Eintrag des Standorts"
    }
}