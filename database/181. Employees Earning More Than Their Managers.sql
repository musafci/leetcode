-- Problem: https://leetcode.com/problems/employees-earning-more-than-their-managers/

-- Solution #01: 
SELECT E1.name AS Employee FROM Employee AS E1 WHERE E1.salary > (SELECT E2.salary FROM Employee AS E2 WHERE E2.id = E1.managerId);

-- Solution #02: 
SELECT e1.name AS Employee FROM Employee e1, Employee e2 WHERE e1.managerId = e2.id AND e1.salary > e2.salary;