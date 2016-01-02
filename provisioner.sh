#!/bin/bash

# update ubuntu and install SO dependencies
apt-get update && sudo apt-get upgrade -y && sudo apt-get dist-upgrade -y
apt-get install -y nodejs g++ git golang python-pip
apt-get autoremove -y && apt-get autoclean -y

# download config files and set the machine up
wget -q https://raw.githubusercontent.com/deniscostadsc/dotfiles/master/.vimrc
chown vagrant:vagrant .vimrc
wget -q https://raw.githubusercontent.com/deniscostadsc/dotfiles/master/.gitconfig
chown vagrant:vagrant .gitconfig

cp /vagrant/.marathon.sh /home/vagrant/

echo '. /home/vagrant/.marathon.sh' >> /home/vagrant/.bashrc
echo 'cd /vagrant' >> /home/vagrant/.bashrc

echo 'LC_ALL="en_US.UTF-8"' >> /etc/environment  # to fix locale 8(

# install python dependencies
pip install --upgrade pip
pip install pep8
