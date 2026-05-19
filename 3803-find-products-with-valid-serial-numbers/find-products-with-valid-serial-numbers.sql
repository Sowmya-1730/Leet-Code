-- Write your PostgreSQL query statement below
SELECT * 
FROM products
WHERE description ~ '(?<![A-Za-z0-9])SN\d{4}-\d{4}(?![A-Za-z0-9])'
ORDER BY product_id;