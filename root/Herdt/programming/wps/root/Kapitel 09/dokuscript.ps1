Function Get-LargeFiles ($location = "C:\Windows", $length = 1MB)
{
    <#
      .SYNOPSIS
      Große Dateien anzeigen
      .DESCRIPTION
      Standardmäßig werden große Daten ab 1 MB im Windows-Verzeichnis angezeigt. Sie können das Verzeichnis und die Dateigröße durch Verwendung von Parametern selbst steuern.
      .PARAMETER location
      Angabe eines Verzeichnisses, das durchsucht werden soll.
      .PARAMETER length
      Festlegung der minimalen Dateigröße.
      .EXAMPLE
      Get-LargeFiles 
      Die vordefinierten Standardwerte werden verwendet: Das Windows-Verzeichnis wird durchsucht, die minimale Dateigröße ist 1 MB.
      .EXAMPLE
      Get-LargeFiles –location C:\Users\Administrator
      In der Funktion wird der Pfad C:\Users\Administrator verwendet, als Dateigrößenvorgabe der Standardwert von 1 MB. 
      .EXAMPLE
      Get-LargeFiles –location F:\Daten –length 100kb
      Die Funktion verwendet die im Aufruf angegebenen Werte F:\Daten und 100 kb.
      .LINK
      http://beispiel.url
      Get-ChildItem
    #>
	Get-ChildItem $location | Where-Object {$_.length -ge $length}
}
