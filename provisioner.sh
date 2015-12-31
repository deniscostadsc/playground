#!/bin/bash

apt-get update && sudo apt-get upgrade -y && sudo apt-get dist-upgrade -y
apt-get install -y nodejs g++ git

wget -q https://raw.githubusercontent.com/deniscostadsc/dotfiles/master/.vimrc
chown vagrant:vagrant .vimrc

cp /vagrant/.marathon.sh /home/vagrant/

echo '. /home/vagrant/.marathon.sh' >> /home/vagrant/.bashrc
echo 'cd /vagrant' >> /home/vagrant/.bashrc
