--- URI Online Judge SQL
--- Copyright URI Online Judge
--- www.urionlinejudge.com.br
--- Problem 2745

CREATE TABLE people (
  id INTEGER PRIMARY KEY,
  name CHARACTER VARYING (255),
  salary NUMERIC
);


INSERT INTO people(id, name, salary)
VALUES
      (1, 'James M. Tabarez', 883),
      (2, 'Rafael T. Hendon', 4281),
      (3, 'Linda J. Gardner', 4437),
      (4, 'Nicholas J. Conn', 8011),
      (5, 'Karol A. Morales', 2508),
      (6, 'Lolita S. Graves', 8709),
      (7, 'Denis S. Costa', 3000),
      (8, 'Denis C. Socialist', 2999),
      (9, 'Denis C. Comunist', 3001);


  /*  Execute this query to drop the tables */
  -- DROP TABLE people; --
