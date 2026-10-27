### Works only in PowerShell 7 !!!

### Operators

#Ternary operator

(Test-Path C:\gibtesnicht) ? 'Gibt es' : 'Gibt es nicht'

#Pipeline Chain Operators

# && = Right hand pipe executed, if left-hand pipe succeeded

Test-Path C:\Windows && 'C:\Windows vorhanden'

# || = If first command succeeded, right-hand pipe is not executed

Get-ChildItem C:\Windows || 'C:\Windows vorhanden'

