-- Problem: https://leetcode.com/problems/department-top-three-salaries/

-- Solution #01: Runtime 1407 ms (Beats 93.51%)
SELECT d.name AS 'Department', e.name AS 'Employee', e.salary AS 'Salary' FROM 
(SELECT departmentId, name, salary, DENSE_RANK() OVER (PARTITION BY departmentId ORDER BY salary DESC) AS 'rank' FROM Employee) AS e
JOIN Department AS d ON e.departmentId = d.id
WHERE e.rank <= 3;
