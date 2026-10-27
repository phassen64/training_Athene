Function Set-Protection ($Path, [switch]$On)
{
    #Variablen werden definiert
    $schalter = $false
    $text = "ENTFERNT."

    #Ist der Switch-Parameter -On angegeben, erhält die Variable $schalter den Wert $True
    If($On)
    {
        $schalter = $True
        $text = "AKTIVIERT."
    }

    Get-ADObject -Filter {(objectClass -eq "User") -or (objectClass -eq "Group")} -SearchBase $Path | Set-ADObject -ProtectedFromAccidentalDeletion:$schalter -PassThru | Select-Object -Property Name | Sort-Object -Property Name
    Write-Host "`nDer Schutz vor versehentlichem Löschen wird für die oben angegebenen Objekte $text" 

}