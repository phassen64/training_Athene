<#   
    url Searcher
   
    description:    
        Searches all Files with extension 
            '.txt'
        lines with:
            'https://' 

    usage :
    $   .\job_urlSearch.ps1

    Working with a temp file at localDir
        $pTmp = "tmp.log"
    
    Sorting results and write at localDir into the files:
        $pUrl = "url.log"           
        $pOut = "url_$sDtm.log"     <copy>
            
#>


#   body 
$d='D:\repository\training\root\NHz\KnowledgeBase'
Set-Location $d

#   search
$sFex = '*.txt'
$sSearchPattern = 'https://' 
$sDtm = Get-Date -Format 'yymmddhhmmss'

#   output files
$pTmp = "tmp.log"
$pUrl = "url.log"
$pOut = "url_$sDtm.log"

#   work
Select-String -Path $sFex -Pattern $sSearchPattern > $pTmp
Write-Output "< created file:'$pTmp'."

#   reply
$env:v_sRc=$pTmp

#   parse file
$aFileLine = Get-Content $env:v_sRc 

#   help array
$aMatchLine = @() 

foreach ( $sLine in $aFileLine ) {

    if ($sLine.Length -le 0) {
        continue 
    }
    if ([string]::IsNullOrWhiteSpace($sLine)) {
        continue 
    }
    
    #   'z1-url.txt:79:    https://www.viture.com'    
    #   fetch last part of output 
    $i = $sLine.IndexOf(' ')
    if ($i -le 0) {
        continue 
    }
    
    $s = $sLine.SubString($i)
    $s = $s.Trim()

    #   sometimes lines like  'url:https://emberspun.com/'
    #   starting search
    $bFound = $false
    for($i=0; $i -lt $s.length; $i++) {
        $t = $s.SubString($i)
        if ($t.StartsWith($sSearchPattern)) {
            $s = $t 
            $bFound = $true
            break
        } 
    }
    if (!$bFound) {
        continue
    }
    
    #   sometimes lines like 'https://xyz      :!url'
    $a = $s.Split(' ')
    $s = $a[0]    

    #   store result
    $aMatchLine += $s
   
}


#   sort and unique
$aMatchLine = $aMatchLine | Sort-Object | Select-Object -Unique

#   sample with alle matched lines
$iLine=0
foreach ( $sLine in $aMatchLine ) {
    $iLine += 1
    $sIdx = [String]::Format("{0:d3}", $iLine)
    Write-Output "[$sIdx] : '$sLine'" >> $pUrl
}
Write-Output "< created file:'$pUrl'."

#   copy into pResult
Copy-Item $pUrl $pOut

#   reply
$env:v_sRc=$pOut
Write-Output "< storing file:'$pOut'."
