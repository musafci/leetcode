-- Problem: https://leetcode.com/problems/big-countries/

-- Solution #01: Runtime 684 ms
SELECT name, population, area FROM World WHERE area >= 3000000 OR population >= 25000000;

-- Solution #02: Runtime 497 ms
select area,population,name
from world
where area>=3000000
union
select area,population,name
from world
where population>=25000000