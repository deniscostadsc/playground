FROM ubuntu:14.04

RUN apt --fix-broken install
RUN apt update
RUN apt upgrade -y
RUN dpkg --configure -a
RUN apt install -y aptitude man-db
RUN aptitude install -f -y fpc

# COPY utils/fpc-2.6.2.arm-linux.tar .
# RUN tar -xvf fpc-2.6.2.arm-linux.tar
# RUN cd fpc-2.6.2.arm-linux && ./install.sh

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run-pas.sh
