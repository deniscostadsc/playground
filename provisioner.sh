#!/bin/bash

apt-get update && sudo apt-get upgrade -y && sudo apt-get dist-upgrade -y

cp /vagrant/marathon.sh /home/vagrant/

apt-get install -y nodejs g++
echo '. /home/vagrant/marathon.sh' >> /home/vagrant/.bashrc
echo 'cd /vagrant' >> /home/vagrant/.bashrc
