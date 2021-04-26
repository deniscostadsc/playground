SELECT products.name, providers.name, products.price
FROM products
JOIN categories ON products.id_categories = categories.id
JOIN providers ON products.id_providers = providers.id
WHERE categories.name = 'Super Luxury'
AND products.price > 1000
