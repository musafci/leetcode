-- Problem: https://leetcode.com/problems/find-customer-referee/

-- Solution #01: Runtime 935 ms
SELECT name FROM Customer WHERE referee_id != 2 OR referee_id IS NULL;