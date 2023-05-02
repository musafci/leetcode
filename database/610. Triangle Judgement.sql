-- Problem: https://leetcode.com/problems/triangle-judgement/description/

-- Solution #01: Runtime 465 ms
SELECT x, y, z, 
       CASE
           WHEN X + Y > Z AND X + z > Y AND Y + z > X THEN 'Yes'
           ELSE 'No'
       END AS 'triangle'
FROM triangle;


-- Solution #02:
select  *,If(x+y>z and x+z>y and y+z>x,"Yes","No") as triangle from Triangle;