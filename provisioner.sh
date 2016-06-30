#!/bin/bash

# update ubuntu and install SO dependencies
sudo apt-get update
sudo apt-get upgrade -y
sudo apt-get dist-upgrade -y

sudo apt-get install -y \
    build-essential \
    clisp \
    g++ \
    gcc \
    golang \
    language-pack-en \
    libffi-dev \
    libssl-dev \
    nodejs \
    npm \
    python-dev \
    python-pip

sudo apt-get autoremove -y
sudo apt-get autoclean -y

sudo locale-gen en


# set the machine up
(
cat <<'EOTHINGS'

export LC_ALL="en_US.UTF-8"
PATH=$PATH:/vagrant/.bin/
cd /vagrant
PS1='\[\033[31m\]playground \[\033[01;35m\]\w\[\033[00m\]\n\$ '
sudo ln -s $(which nodejs) /usr/bin/node

EOTHINGS
) >> ~/.bashrc


# install python dependencies
sudo -H pip install pip flake8 cpplint ndg-httpsclient --upgrade


# install nodejs and js dependencies
sudo npm install -g jshint jscs
