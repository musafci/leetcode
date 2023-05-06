-- Problem: https://leetcode.com/problems/department-highest-salary/description/

-- Solution #01: Runtime 1402 ms

SELECT d.name AS 'Department', e.name AS 'Employee', e.salary AS 'Salary' FROM employee AS e
JOIN (SELECT departmentId, MAX(salary) AS 'max_salary' FROM employee GROUP BY departmentId) AS emax
ON e.departmentId = emax.departmentId AND e.salary = emax.max_salary
JOIN department d ON e.departmentId = d.id;


-- Solution #02: Runtime 1096 ms

SELECT d.name AS Department, e.name AS Employee, e.salary AS Salary
FROM Employee e
JOIN Department d ON e.departmentId = d.id
WHERE (e.departmentId, e.salary) IN
    (SELECT departmentId, MAX(salary)
     FROM Employee
     GROUP BY departmentId)