-- Problem: https://leetcode.com/problems/customers-who-never-order/

-- Solution #01: Runtime 815 ms
SELECT name AS Customers FROM Customers LEFT JOIN Orders ON Customers.id = Orders.customerId WHERE Orders.customerId IS NULL;

-- Solution #02: Runtime 1405 ms
SELECT name AS Customers FROM Customers WHERE id NOT IN (SELECT customerId FROM Orders);