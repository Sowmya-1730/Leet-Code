-- Write your PostgreSQL query statement below
SELECT r.employee_id, r.name, COUNT(e.employee_id) AS reports_count, ROUND(AVG(e.age)) AS average_age
FROM Employees e
JOIN Employees r
ON e.reports_to = r.employee_id
GROUP BY r.employee_id, r.name
ORDER BY r.employee_id;