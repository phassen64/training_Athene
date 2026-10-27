# Standard Prompt Funktion ansehen

(Get-Item function:prompt).ScriptBlock

<#
"PS $($executionContext.SessionState.Path.CurrentLocation)$('>' * ($nestedPromptLevel + 1)) ";
# .Link
# https://go.microsoft.com/fwlink/?LinkID=225750
# .ExternalHelp System.Management.Automation.dll-help.xml
#>

# Prompt aendern (indem man die Standard Funktion aendert)

function prompt {

    "$(Get-Date)> "

}
function prompt {

    "PS [$env:COMPUTERNAME]> "

}

function prompt {

  "PS [$env:USERNAME]> "

}

function prompt {
    $identity = [Security.Principal.WindowsIdentity]::GetCurrent()
    $principal = [Security.Principal.WindowsPrincipal] $identity
    $adminRole = [Security.Principal.WindowsBuiltInRole]::Administrator
  
    $(if (Test-Path variable:/PSDebugContext) { '[DBG]: ' }
      elseif($principal.IsInRole($adminRole)) { "[ADMINISTRATOR]: " }
      else { '' }
    ) + 'PS ' + $(Get-Location) +
      $(if ($NestedPromptLevel -ge 1) { '>>' }) + '> '
  }