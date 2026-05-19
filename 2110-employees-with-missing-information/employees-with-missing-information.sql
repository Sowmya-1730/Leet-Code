-- Write your PostgreSQL query statement below
SELECT COALESCE(emp.employee_id, sal.employee_id) AS employee_id
FROM Employees emp
FULL OUTER JOIN Salaries sal ON emp.employee_id = sal.employee_id
wHERE emp.name IS NULL OR sal.salary IS NULL
ORDER BY employee_id;