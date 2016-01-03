#!/bin/bash

# update ubuntu and install SO dependencies
apt-get update && sudo apt-get upgrade -y && sudo apt-get dist-upgrade -y
apt-get install -y g++ git golang python-pip build-essential libssl-dev curl
apt-get autoremove -y && apt-get autoclean -y


# download config files and set the machine up
wget -q https://raw.githubusercontent.com/deniscostadsc/dotfiles/master/.vimrc
chown vagrant:vagrant .vimrc
wget -q https://raw.githubusercontent.com/deniscostadsc/dotfiles/master/.gitconfig
chown vagrant:vagrant .gitconfig
cp /vagrant/.marathon.sh /home/vagrant/
chown vagrant:vagrant .marathon.sh

echo '. /home/vagrant/.marathon.sh' >> /home/vagrant/.bashrc
echo 'cd /vagrant' >> /home/vagrant/.bashrc

echo 'LC_ALL="en_US.UTF-8"' >> /etc/environment  # to fix locale 8(


# install python dependencies
pip install --upgrade pip
pip install pep8 cpplint


# install nodejs and js dependencies
echo 'export PATH=$HOME/local/bin:$PATH' >> /home/vagrant/.bashrc
echo 'export NODE_PATH=$HOME/local/lib/node_modules' >> /home/vagrant/.bashrc
. /home/vagrant/.bashrc

mkdir -p /home/vagrant/local /home/vagrant/download
chown -R vagrant:vagrant /home/vagrant/local /home/vagrant/download

cd /home/vagrant/download
curl -s http://nodejs.org/dist/node-latest.tar.gz | tar xz --strip-components=1

./configure --prefix=/home/vagrant/local
make install

sudo -u vagrant npm install jshint
rm -rf /home/vagrant/download
