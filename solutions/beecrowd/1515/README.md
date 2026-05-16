https://judge.beecrowd.com/en/problems/view/1515

# Hello Galaxy

Currently, at the year 2114, the knowledge that we are not alone in the universe
is not any news, but one century before it was yet a mystery. Several
civilizations in the Milky Way had already sent some kind of signal proving
their existence, and others even established an open contact with Earth in
search of informations about such Hexagonary Tree (after all, we are at 2114).

Rafael is very interested in this subject, and in a school work he undertook the
challenge of finding out which was the first civilization that sent a Hello
Galaxy to all the galaxy. Hello Galaxy is nothing more than the first step of
the Milky Way Society Iniciation Protocol, MWSIP, ensuring them to get in touch
when they need.

The Hello Galaxy brings two kinds of information with it: the text “Hello
Galaxy”, as says the tradition, and the name of the planet of the civilization
that sent the message. The MWSMC, Milk Way Society Monitoring Center, installed,
for some reason, in Earth, receive such messages, saving in a record the year
the message was received and the amount of years that such message took to get
in there.

Rafael's task is as follows: find out who was the first civilization to send a
Hello Galaxy message.

## Input

There will be several test cases.

Each test case starts with an integer $N (1 \leq N \leq 100)$, that indicates
how many Hello Galaxy messages were collected by Rafael at his research.

Following there will be $N$ lines, each containing one message. Each message is
represented by the name of the civilization's planet, containing between 1 and
50 characters (only letters), and two integers $A$ and $T (2014 \leq A \leq
2113, 1 \leq T \leq 1000)$, representing, respectivelly, the year that message
was received at Earth, and the amount of years that such message took to travel
between the source's planet to Earth.

The last test case is indicated when $N = 0$, which should not be processed.

## Output

For each test case, there must be printed one line, containing the name of the
first civilization's planet to send a Hello Galaxy message. One could assume
that there will be no ties.
