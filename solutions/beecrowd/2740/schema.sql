--- URI Online Judge SQL
--- Copyright URI Online Judge
--- www.urionlinejudge.com.br
--- Problem 2740

--- sqlfomat wrongly assume that position is a keyword
--- but since postgresql converts now quoted column name
--- to lowercase, this wont be a problem.
--- https://stackoverflow.com/questions/20878932/are-postgresql-column-names-case-sensitive
CREATE TABLE league(
  POSITION INTEGER,
  team CHARACTER VARYING (255)
);


INSERT INTO league(POSITION, team)
VALUES (1, 'The Quack Bats'),
       (2, 'The Responsible Hornets'),
       (3, 'The Bawdy Dolphins'),
       (4, 'The Abstracted Sharks'),
       (5, 'The Nervous Zebras'),
       (6, 'The Oafish Owls'),
       (7, 'The Unequaled Bison'),
       (8, 'The Keen Kangaroos'),
       (9, 'The Left Nightingales'),
       (10, 'The Terrific Elks'),
       (11, 'The Lumpy Frogs'),
       (12, 'The Swift Buffalo'),
       (13, 'The Big Chargers'),
       (14, 'The Rough Robins'),
       (15, 'The Silver Crocs');


  /*  Execute this query to drop the tables */
  -- DROP TABLE league; --