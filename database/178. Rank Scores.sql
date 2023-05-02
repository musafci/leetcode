-- Problem: https://leetcode.com/problems/rank-scores/description/

-- Solution #01: Runtime 603 ms
select score, dense_rank() over(order by score desc) as 'rank' from Scores

-- Solution #02: Runtime 543 ms
select score, dense_rank() over(order by score desc) as 'rank' from scores;