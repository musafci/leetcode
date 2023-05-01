-- Problem: https://leetcode.com/problems/sales-person/description/

-- Solution #01: Runtime 2673 ms
SELECT s.name from SalesPerson AS s WHERE s.sales_id NOT IN (SELECT o.sales_id FROM Orders AS o LEFT JOIN Company AS c ON o.com_id = c.com_id WHERE c.name = "RED");

-- Solution #02:
