# Ubuntu PowerShell 7 installieren

# Update the list of packages
sudo apt-get update
# Install pre-requisite packages.
sudo apt-get install -y wget apt-transport-https software-properties-common
# Download the Microsoft repository GPG keys
wget -q "https://packages.microsoft.com/config/ubuntu/$(lsb_release -rs)/packages-microsoft-prod.deb"
# Register the Microsoft repository GPG keys
sudo dpkg -i packages-microsoft-prod.deb
# Update the list of packages after we added packages.microsoft.com
sudo apt-get update
# Install PowerShell
sudo apt-get install -y powershell
# Start PowerShell
pwsh

# Ubuntu SSH aktivieren
sudo apt-get install openssh-server
sudo systemctl enable ssh --now
pwsh
Install-Module -Name Microsoft.PowerShell.RemotingTools -Force -AllowClobber -Verbose
Enable-SSHRemoting 
exit
sudo ufw allow ssh
sudo ufw enable
sudo ufw status
sudo chown ubuntu /etc/ssh/sshd_config
# Editor öffnen und sshd_config verändern (ohne #): PasswordAuthentication yes
# Editor öffnen und sshd_config verändern (ohne #): Subsystem powershell /usr/bin/pwsh -sshs -nologo
sudo systemctl restart sshd.service

# Test 
Enter-PSSession -HostName IPUbuntu -UserName username
