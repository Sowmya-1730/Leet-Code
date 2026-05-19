-- Write your PostgreSQL query statement below

WITH first_login AS (
    SELECT player_id, MIN(event_date) AS first_date
    FROM Activity
    GROUP BY player_id
),
day_after_login AS (
    SELECT f.player_id
    FROM first_login f
    JOIN Activity a
      ON f.player_id = a.player_id
     AND a.event_date = f.first_date + INTERVAL '1 day'
)
SELECT ROUND(
    1.0 * (SELECT COUNT(*) FROM day_after_login) /
          (SELECT COUNT(*) FROM first_login),
    2
) AS fraction;