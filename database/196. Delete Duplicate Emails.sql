-- Problem: https://leetcode.com/problems/delete-duplicate-emails/

-- Solution #01: Runtime 1279 ms
DELETE p1 FROM Person as p1 JOIN Person AS p2 ON p1.email = p2.email AND p1.id > p2.id;

-- Solution #02: Runtime 1329 ms
DELETE p1 FROM Person as p1, Person as p2 WHERE p1.email = p2.email AND p1.id > p2.id;