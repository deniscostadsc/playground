FROM postgres:9.4.19

ENV PGPASSWORD beecrowd

RUN mkdir /code
WORKDIR /code

# Got this hack here: https://stackoverflow.com/a/63300637
RUN rm -rf /etc/apt/sources.list.d/pgdg.list 
RUN apt update && apt install -y --force-yes wget

RUN cd /bin && \
    wget https://raw.githubusercontent.com/vishnubob/wait-for-it/master/wait-for-it.sh && \
    chmod +x wait-for-it.sh

CMD /code/scripts/docker/run-sql.sh $FOLDERS
