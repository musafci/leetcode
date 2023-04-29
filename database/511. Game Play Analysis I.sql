-- Problem: https://leetcode.com/problems/game-play-analysis-i/description/

-- Solution #01: Runtime 875 ms
SELECT player_id, MIN(event_date) AS first_login FROM Activity GROUP BY player_id;

-- Solution #02: Runtime 1116 ms
SELECT DISTINCT player_id, MIN(event_date) AS first_login FROM Activity GROUP BY player_id;

-- Solution #03: Runtime 1183 ms
select distinct player_id, min(event_date) over (partition by player_id) first_login from Activity 
