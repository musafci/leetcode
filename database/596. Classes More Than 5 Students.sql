-- Problem: https://leetcode.com/problems/classes-more-than-5-students/

-- Solution #01: Runtime 644 ms
SELECT class FROM courses GROUP BY class HAVING COUNT(class) >= 5;