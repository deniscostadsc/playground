#!/bin/bash

# update ubuntu and install SO dependencies
curl -sL https://deb.nodesource.com/setup_4.x | sudo -E bash -
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

sudo apt-get autoremove -y
sudo apt-get autoclean -y

sudo locale-gen en


# download config files and set the machine up
cp /vagrant/marathon.sh /home/vagrant/.marathon

echo '. /home/vagrant/.marathon' >> /home/vagrant/.bashrc
echo 'cd /vagrant' >> /home/vagrant/.bashrc


# install python dependencies
sudo -H pip install --upgrade pip
sudo -H pip install flake8 cpplint


# install nodejs and js dependencies
sudo npm install -g jshint jscs
