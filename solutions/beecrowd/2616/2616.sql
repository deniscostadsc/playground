SELECT customers.id, customers.name
FROM customers
LEFT JOIN locations ON customers.id = locations.id_customers
WHERE locations.id_customers IS NULL;