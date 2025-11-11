# Write your MySQL query statement below
select activity_date as day , count(distinct user_id) as active_users
from activity
WHERE DATEDIFF('2019-07-27', activity_date) BETWEEN 0 AND 29
group by activity_date
having count(distinct user_id) > 0