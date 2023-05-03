-- Problem: https://leetcode.com/problems/not-boring-movies/description/

-- Solution #01 Runtime 467 ms
select * from cinema where (description != "boring") and (id%2 != 0) order by rating desc;

-- Solution #02: Runtime 349 ms
select * from cinema where id%2 != 0 and description != "boring" order by rating desc;

 