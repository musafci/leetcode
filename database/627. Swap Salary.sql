-- Problem: https://leetcode.com/problems/swap-salary/description/

-- Solution #01: Runtime 434 ms
UPDATE salary SET sex =
case
	when sex = "m" then "f"
	when sex = "f" then "m"
END

-- Solution #02: Runtime 435 ms
update Salary
SET sex =
CASE sex
    WHEN 'm' THEN 'f'
    ELSE 'm'
END;