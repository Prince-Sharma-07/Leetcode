# Write your MySQL query statement below
select round(count(distinct player_id) / (select count(distinct player_id) from activity), 2) As fraction
from activity
where (player_id, date_sub(event_date, Interval 1 Day))
in (
    select player_id, min(event_date) as first_login from activity group by player_id
)