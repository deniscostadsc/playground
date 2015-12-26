#!/bin/bash

apt-get update && sudo apt-get upgrade -y && sudo apt-get dist-upgrade -y
apt-get install -y nodejs g++

cp /vagrant/marathon.sh /home/vagrant/

echo '. /home/vagrant/marathon.sh' >> /home/vagrant/.bashrc
echo 'cd /vagrant' >> /home/vagrant/.bashrc
