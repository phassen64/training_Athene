<#   
    ***************************************************************************
    name:   url.searcher                    DTM: [2026-11-13]
    ***************************************************************************
   
    description:    
        •   Searches at directory:
                $p_dSrc
            in files like 
                $p_sSrcFnmExt  = '.txt'
            lines with the pattern:
                $p_sSearchPattern = 'https://' 
        •   sorting the results and check unique
        •   flush the result into directory:
                $p_dObj
            named with:     
                'url_<DATETIME>.log'
        •   supporting to switches
                o_usage     *   helper info
                o_perform   *   performs the job

    remark:
        •   the script is startable via the 
                Windows FileExplorer
    usage:
        $>  $d='D:\repository\training\root\NHz\KnowledgeBase'
        $>  Set-Location $d
        $>  .\job_urlSearch.ps1 -o_usage
        $>  .\job_urlSearch.ps1 -o_perform

    preconditions:
        •   $env:UserProfile
        •   $env:v_USR_scratch_relPath
        •   existing scratchDir 
            "$env:UserProfile$env:v_USR_scratch_relPath"
    
    output at scratch:
        •   tmp.log     *   temp dir
        •   url.log     *   all url's found in sourceDir textFiles
        •   url_<DTM>.log   *   is COPY, but versionized
                      
    organization:
        •   mATe64 UG
    
#>

#
#   m:  parameter
#

param(
        [string]    $p_dObj = "$env:UserProfile$env:v_USR_scratch_relPath",
        [string]    $p_dSrc = "$env:v_VCS\training\root\NHz\KnowledgeBase",
        [string]    $p_sSrcFnmExt       =   '*.txt',
        [string]    $p_sSearchPattern   =   'https://',
        [switch]    $o_usage,
        [switch]    $o_perform,
        [switch]    $o_verbose,
        [switch]    $o_debug,
        [int]       $p_iDelay   = 5
)

#   ===========================================================================
#   m:  F.library
#   ===========================================================================

function f_hlp_getCurrentLineNumber {
    $MyInvocation.ScriptLineNumber
} # f~posLine

function f_hlp_print(
    [string]    $p_sText,
    [string]    $p_sColor = $C_sColor_std,
    [switch]    $o_NL) {
    $s = "$p_sText"
    if ( $o_NL ) {
        Write-Host $s -ForegroundColor $p_sColor
    }
    else {
        Write-Host $s -ForegroundColor $p_sColor -NoNewLine
    }
} # f~print

function f_hlp_puts(
    [string]    $p_sText,
    [string]    $p_sColor = $C_sColor_std) {
    f_hlp_print -p_sText $p_sText -p_sColor $p_sColor -o_NL
} # f~puts

function f_hlp_joinPath ( [string] $p_sDir, [string] $p_sFnm ) {
    #   build
    $s = $p_sDir
    if ( $s[$s.Length - 1] -ne $C_cSepDirectoryPath ) {
        $s +=   $C_cSepDirectoryPath
    }
    $s += $p_sFnm
    return $s
} # f~lib_joinPath

function f_hlp_delay( [int] $p_iSeconds = 1, $p_sText = 'stop') {
    if ($p_iSeconds -gt 1) {
    }        
    $s = "--- "
    $s += $p_sText
    $s += "<$p_iSeconds>"
    f_hlp_print $s $C_sColor_trace
    timeout $p_iSeconds
} # f~delay

function  f_help_getFileDateTime([string] $p_sFilePath,
        [string] $p_sDtmFmt = 'yyyyMMdd|HH:mm:ss') {
    if (!(Test-Path $p_sFilePath -PathType Leaf)) {       # mustExist
        return "?DTM"
    }
    $x      =   Get-Item $p_sFilePath     #   09/19/2024 13:05:06
    $sDtm   =   $x.LastWriteTime.ToString($p_sDtmFmt)
    return $sDtm
} # f~getFileDateTime

#   ===========================================================================
#   m:  F.module
#   ===========================================================================

function f_mod_usage([int] $p_iLine) {
    $sScp   = $MyInvocation.ScriptName    
    $sDtm   = f_help_getFileDateTime($sScp)
    $s =    "<scp>:='$sScp'"
    $s +=   "`n`t<ver>:='[$sDtm]"
    $s +=   "`n`t-p_dObj <dirObj> =: '$p_dObj'"
    $s +=   "`n`t-p_dSrc <dirSrc> =: '$p_dSrc'"
    $s +=   "`n`t-p_sSrcFnmExt <fExtSrc> =: '$p_sSrcFnmExt'"
    $s +=   "`n`t-p_sSearchPattern =: '$p_sSearchPattern'"
    $s +=   "`n`t`t -o_usage    * run this "
    $s +=   "`n`t`t -o_perform  * do urlSearch "
    $s +=   "`n`t`t -o_verbose  * more text"
    $s +=   "`n`t`t -p_iDelay   = <$p_iDelay> * delay after finishing script "
    $sUsage = $s    
    Write-Host $sUsage -ForegroundColor $C_sColor_result
}#  f~usage

function f_mod_main([int] $p_iLine) {

    _puts "### `tmain" $C_sColor_menu
    
    #   body 
    Set-Location $p_dSrc
    
    #   search
    #   $sFex = '*.txt'
    $sDtm = Get-Date -Format 'yymmddHHmmss'
       
    #   work:tmpFile
    $fNam = "tmp.log"
    $pTmp = f_hlp_joinPath ($p_dObj)($fNam)
    Select-String `
        -Path $p_sSrcFnmExt `
        -Pattern $p_sSearchPattern > $pTmp
    if ($o_verbose) {
        _puts "<`tcreated temp file:'$pTmp'." $C_sColor_info        
    }

    #   genrate output file
    $fNam = "url.log"
    $pUrl = f_hlp_joinPath ($p_dObj)($fNam)
    Write-Output "### created urlSearch dtm:[$sDtm]" > $pUrl
    Write-Output "... file :$pUrl" >> $pUrl
    Write-Output "... using:$pTmp" >> $pUrl
    
    #   reply
    $env:v_sRc = $pTmp
    
    #   parse file
    $aFileLine = Get-Content $pTmp
    
    #   help array
    $aMatchLine = @() 
    
    $i = 0
    foreach ( $sLine in $aFileLine ) {
    
        $i += 1
        if ($sLine.Length -le 0) {
            continue 
        }
        if ($o_debug) { Write-Output "[$i]:'$sLine'" >> $pUrl }

        if ([string]::IsNullOrWhiteSpace($sLine)) {
            continue 
        }
        if ($o_debug) { Write-Output "--- notNull" >> $pUrl }
        
        #   'z1-url.txt:79:    https://www.viture.com'    
        #   fetch last part of output 
        $i = $sLine.IndexOf(' ')
        if ($i -le 0) {
            continue 
        }
        
        $s = $sLine.SubString($i)
        $s = $s.Trim()
        if ($sLine.Length -le 0) {
            continue 
        }
        if ($o_debug) { Write-Output "--- afterTrim" >> $pUrl }
    
        #   sometimes lines like  'url:https://emberspun.com/'
        #   starting search
        $bFound = $false
        for($i=0; $i -lt $s.length; $i++) {
            $t = $s.SubString($i)
            if ($t.StartsWith($p_sSearchPattern)) {
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
    if ($o_verbose) {
        _puts "<`tcreated file:'$pUrl'." $C_sColor_info
    }
    
    #   copy into pResult
    $fNam = "url_$sDtm.log"
    $pOut = f_hlp_joinPath ($p_dObj)($fNam)
    Copy-Item $pUrl $pOut
    _puts "<`tcreated file:'$pOut'." $C_sColor_result
    
    #   reply
    $env:v_sRc=$pOut
    Write-Output "< storing file:'$pOut'." 
    
    return $true
    
}   # f~main

#   ===========================================================================
#   m:  body
#   ===========================================================================

#   s:  alias
Set-Alias -Name __LINE__    -Value f_hlp_getCurrentLineNumber
Set-Alias -Name _print      -Value f_hlp_print
Set-Alias -Name _puts       -Value f_hlp_puts
Set-Alias -Name _delay      -Value f_hlp_delay

#   s:  const
Set-Variable -Name C_sColor_std     -Value 'Gray'
Set-Variable -Name C_sColor_trace   -Value 'Magenta'
Set-Variable -Name C_sColor_menu    -Value 'Green'
Set-Variable -Name C_sColor_info    -Value 'Yellow'
Set-Variable -Name C_sColor_eRror   -Value 'DarkRed'
Set-Variable -Name C_sColor_warn    -Value 'DarkYellow'
Set-Variable -Name C_sColor_file    -Value 'Blue'
Set-Variable -Name C_sColor_result  -Value 'Cyan'

#   s:  const.else
$C_cSepDirectoryPath    =   '\'


#   s:  manager
if ($o_usage) {
    $iDelay = 2 * $p_iDelay
    $bRc = f_mod_usage(__LINE__)
} 
elseif ($o_perform) {
    $iDelay = $p_iDelay
    $bRc = f_mod_main(__LINE__)
}

#   s:  delay
_delay $iDelay 'stop in:'
