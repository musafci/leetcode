-- Problem: https://leetcode.com/problems/customer-placing-the-largest-number-of-orders/

-- Solution #01: Runtime 769 ms
SELECT customer_number FROM Orders GROUP BY customer_number ORDER BY COUNT(*) DESC LIMIT 1;

-- Solution #02: Runtime 841 ms
SELECT customer_number FROM Orders GROUP BY customer_number ORDER BY COUNT(customer_number) DESC LIMIT 1;