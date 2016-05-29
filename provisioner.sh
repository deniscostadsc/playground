#!/bin/bash

# update ubuntu and install SO dependencies
sudo apt-get update
sudo apt-get upgrade -y
sudo apt-get dist-upgrade -y

sudo apt-get install -y \
    build-essential \
    curl \
    g++ \
    golang \
    language-pack-en \
    libssl-dev \
    nodejs \
    npm \
    python-pip

sudo apt-get autoremove -y
sudo apt-get autoclean -y

sudo locale-gen en


# download config files and set the machine up
echo 'PATH=$PATH:/vagrant/scripts/' >> ~/.bashrc
echo 'cd /vagrant' >> ~/.bashrc
echo "PS1='\[\033[31m\]playground \[\033[01;35m\]\w\[\033[00m\]\n\$ '" >> ~/.bashrc

sudo ln -s $(which nodejs) /usr/bin/node


# install python dependencies
sudo -H pip install --upgrade pip
sudo -H pip install flake8 cpplint


# install nodejs and js dependencies
sudo npm install -g jshint jscs
