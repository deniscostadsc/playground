#!/bin/bash

# update ubuntu and install SO dependencies
sudo apt-get update
sudo apt-get upgrade -y
sudo apt-get dist-upgrade -y

sudo apt-get install -y \
    build-essential \
    clisp \
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


# set the machine up
echo 'export LC_ALL="en_US.UTF-8"' >> ~/.bashrc
echo 'PATH=$PATH:/vagrant/.bin/' >> ~/.bashrc
echo 'cd /vagrant' >> ~/.bashrc
echo "PS1='\[\033[31m\]playground \[\033[01;35m\]\w\[\033[00m\]\n\$ '" >> ~/.bashrc


# install python dependencies
sudo -H pip install --upgrade pip
sudo -H pip install flake8 cpplint


# install nodejs and js dependencies
sudo npm install -g jshint jscs
