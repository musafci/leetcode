-- Problem: https://leetcode.com/problems/duplicate-emails/

-- Solution #01: 
SELECT email AS Email FROM Person GROUP BY Email HAVING COUNT(Email) > 1;

-- Solution #02
SELECT Email FROM Person GROUP BY Email HAVING COUNT(*) > 1;