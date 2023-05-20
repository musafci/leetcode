-- Problem: https://leetcode.com/problems/project-employees-i/description/

-- Solution #01: Runtime 1501 ms

SELECT Project.project_id, ROUND(AVG(Employee.experience_years), 2) AS average_years
FROM Project
JOIN Employee ON Project.employee_id = Employee.employee_id
GROUP BY Project.project_id;