SELECT movies.id, movies.name
FROM movies
JOIN prices ON movies.id_prices = prices.id
WHERE value < 2.00;