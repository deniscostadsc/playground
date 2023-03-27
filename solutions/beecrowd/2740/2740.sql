(SELECT 'Podium: ' || team AS name
FROM league
WHERE league.position IN (1, 2, 3)
ORDER BY league.position ASC)
UNION ALL
(SELECT 'Demoted: ' || team
FROM league
WHERE league.position IN (14, 15)
ORDER BY league.position ASC);