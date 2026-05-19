-- Write your PostgreSQL query statement below
SELECT emp.employee_id
FROM Employees emp
FULL OUTER JOIN Employees manager
ON emp.manager_id = manager.employee_id
WHERE emp.salary < 30000 AND manager.employee_id IS NULL AND emp.manager_id IS NOT NULL
ORDER BY emp.employee_id