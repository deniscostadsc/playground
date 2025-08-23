FROM alpine:latest

RUN apk -U upgrade && apk add bash
RUN mkdir /code
WORKDIR /code

# Add latest released version of clitest
RUN wget https://raw.githubusercontent.com/aureliojargas/clitest/8bdaae2f56e524f8824307d5c443e6353fe0dbd9/clitest
RUN chmod +x clitest
RUN mv clitest /usr/bin

CMD clitest $(find tests/ -name '*.txt')
