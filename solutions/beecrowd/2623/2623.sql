SELECT products.name, categories.name
FROM products
JOIN categories ON products.id_categories = categories.id
WHERE products.amount > 100
AND categories.id in (1, 2, 3, 6, 9)
ORDER BY categories.id ASC;
