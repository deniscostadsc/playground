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
    python-pip

curl -sL https://deb.nodesource.com/setup_4.x | sudo -E bash -

sudo apt-get autoremove -y
sudo apt-get autoclean -y

sudo locale-gen en


# download config files and set the machine up
echo 'PATH=$PATH:/vagrant/scripts/' >> /home/vagrant/.bashrc
echo 'cd /vagrant' >> /home/vagrant/.bashrc


# install python dependencies
sudo -H pip install --upgrade pip
sudo -H pip install flake8 cpplint


# install nodejs and js dependencies
sudo npm install -g jshint jscs
