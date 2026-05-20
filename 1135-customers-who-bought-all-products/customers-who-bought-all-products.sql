-- Write your PostgreSQL query statement below
SELECT customer_id
FROM Customer c
GROUP BY c.customer_id
HAVING ARRAY_AGG(c.product_key) @> ARRAY(SELECT product_key FROM Product);