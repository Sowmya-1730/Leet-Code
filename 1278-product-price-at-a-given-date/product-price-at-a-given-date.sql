-- Write your PostgreSQL query statement below
SELECT DISTINCT ON (product_id) product_id,
    CASE WHEN change_date <= '2019-08-16' THEN new_price ELSE 10 END AS price
FROM Products
ORDER BY product_id, (CASE WHEN change_date <= '2019-08-16' THEN change_date ELSE NULL END) DESC NULLS LAST;