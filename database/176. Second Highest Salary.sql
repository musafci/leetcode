-- Problem: https://leetcode.com/problems/second-highest-salary/

-- Solution #01: Runtime 458 ms
SELECT MAX(salary) AS SecondHighestSalary FROM Employee WHERE salary < (SELECT MAX(salary) FROM Employee);

-- Solution #02: Runtime 491 ms
SELECT 
   MAX(Salary) AS SecondHighestSalary 
FROM 
   Employee 
WHERE 
   Salary NOT IN (
      SELECT 
         MAX(Salary) 
      FROM 
         Employee
   )