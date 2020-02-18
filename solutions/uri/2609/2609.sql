SELECT categories.name, sum(products.amount) FROM products
    JOIN categories on categories.id = products.id_categories
    GROUP BY categories.name;
