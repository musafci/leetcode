-- Probelm: https://leetcode.com/problems/actors-and-directors-who-cooperated-at-least-three-times/description/

-- Solution #01: Runtime 768 ms
SELECT actor_id, director_id FROM actordirector GROUP BY actor_id, director_id HAVING COUNT(timestamp) >= 3;