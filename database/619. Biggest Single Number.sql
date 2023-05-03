-- Problem: https://leetcode.com/problems/biggest-single-number/description/

-- Solution #01: Runtime 641 ms
select max(num) as num from
(select num
from mynumbers
group by num
having count(num) = 1) as single_num;