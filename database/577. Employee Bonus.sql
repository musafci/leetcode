-- Problem: https://leetcode.com/problems/employee-bonus/

-- Solution #01: Runtime 2111 ms
SELECT Employee.name, Bonus.bonus FROM Employee LEFT OUTER JOIN Bonus ON Employee.empId = Bonus.empId WHERE Bonus.bonus < 1000 OR Bonus.bonus IS NULL;

-- Solution #02: Runtime 1654 ms
SELECT Employee.name, Bonus.bonus FROM Employee LEFT JOIN Bonus ON Employee.empId = Bonus.empId WHERE Bonus.bonus < 1000 OR Bonus.bonus IS NULL;
