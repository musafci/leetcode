-- Problem: https://leetcode.com/problems/combine-two-tables/

-- Solution: 
SELECT firstName, lastName, city, state FROM Person LEFT JOIN Address ON Person.personId = Address.personId;