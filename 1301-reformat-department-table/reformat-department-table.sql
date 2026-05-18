-- Write your PostgreSQL query statement below
SELECT id,
    sum(CASE WHEN month = 'Jan' THEN revenue ELSE NULL END) as Jan_revenue,
    sum(CASE WHEN month = 'Feb' THEN revenue ELSE NULL END) as Feb_revenue,
    sum(CASE WHEN month = 'Mar' THEN revenue ELSE NULL END) as Mar_revenue,
    sum(CASE WHEN month = 'Apr' THEN revenue ELSE NULL END) as Apr_revenue,
    sum(CASE WHEN month = 'May' THEN revenue ELSE NULL END) as May_revenue,
    sum(CASE WHEN month = 'Jun' THEN revenue ELSE NULL END) as Jun_revenue,
    sum(CASE WHEN month = 'Jul' THEN revenue ELSE NULL END) as Jul_revenue,
    sum(CASE WHEN month = 'Aug' THEN revenue ELSE NULL END) as Aug_revenue,
    sum(CASE WHEN month = 'Sep' THEN revenue ELSE NULL END) as Sep_revenue,
    sum(CASE WHEN month = 'Oct' THEN revenue ELSE NULL END) as Oct_revenue,
    sum(CASE WHEN month = 'Nov' THEN revenue ELSE NULL END) as Nov_revenue,
    sum(CASE WHEN month = 'Dec' THEN revenue ELSE NULL END) as Dec_revenue

FROM Department
GROUP BY id
ORDER BY id