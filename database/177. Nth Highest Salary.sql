-- Problem: https://leetcode.com/problems/nth-highest-salary/

-- Solution #01: Runtime 1171 ms
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
    SELECT DISTINCT Salary AS NthHighestSalary 
    FROM Employee E1 
    WHERE N = (
      SELECT COUNT(DISTINCT E2.Salary) 
      FROM Employee E2 
      WHERE E2.Salary >= E1.Salary
    )
  );
END;


-- Solution #02: Runtime 816 ms
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  SET N = N-1;
  RETURN (
    SELECT DISTINCT Salary
    FROM Employee
    GROUP BY Salary
    ORDER BY Salary DESC
    LIMIT 1 OFFSET N
  );
END;


-- Solution #03: Runtime 713 ms
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  SET N = N-1;
  RETURN (
    SELECT DISTINCT Salary
    FROM Employee
    GROUP BY Salary
    ORDER BY Salary DESC
    LIMIT 1 OFFSET N
  );
END;