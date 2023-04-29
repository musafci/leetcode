-- Problem: https://leetcode.com/problems/rising-temperature/

-- Solution #01: Runtime 909 ms
SELECT t1.id AS Id FROM Weather AS t1, Weather As t2 WHERE DATEDIFF(t1.recordDate, t2.recordDate) = 1 AND t1.temperature > t2.temperature;

-- Solution #02: Runtime 618 ms
SELECT w1.id
FROM Weather w1
JOIN Weather w2 ON w1.recordDate = DATE_ADD(w2.recordDate, INTERVAL 1 DAY)
WHERE w1.temperature > w2.temperature