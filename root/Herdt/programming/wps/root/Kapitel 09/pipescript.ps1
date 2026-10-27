Begin
{
	Write-Host "Große Dateien vor rotem Hintergrund:"
}
Process
{
    If ($_.length -lt 1MB)
    {
        $_
    }
    Else
    {
        $Standardfarbe = $host.UI.RawUI.BackgroundColor
        $host.UI.RawUI.BackgroundColor = "Red"
        $_
        $host.UI.RawUI.BackgroundColor = $Standardfarbe
    }
}
End
{
    Write-Host "Ende der Verarbeitung."
}
