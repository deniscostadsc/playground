SELECT life_registry.name, ROUND(life_registry.omega * 1.618, 3) AS "The N Factor"
FROM dimensions
JOIN life_registry ON dimensions.id = life_registry.dimensions_id
WHERE life_registry.name LIKE '%Richard%'
AND dimensions.name IN ('C875', 'C774')
ORDER BY "The N Factor" ASC;