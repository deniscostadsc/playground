FROM php:8.1.2-alpine

RUN apk add --no-cache git bash

RUN git clone https://github.com/squizlabs/PHP_CodeSniffer.git /phpcs

RUN ln -s /phpcs/bin/phpcs /usr/local/bin/phpcs
RUN ln -s /phpcs/bin/phpcbf /usr/local/bin/phpcbf

RUN mkdir /code
WORKDIR /code

CMD echo "php"; scripts/lint/lint-php.sh
