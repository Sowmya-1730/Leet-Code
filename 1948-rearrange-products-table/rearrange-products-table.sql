-- Write your PostgreSQL query statement below
SELECT product_id, l.store, l.price
FROM Products p
CROSS JOIN LATERAL(
    VALUES 
    ('store1',p.store1),
    ('store2',p.store2),
    ('store3',p.store3)
) AS l(store, price)
WHERE l.price IS NOT NULL;