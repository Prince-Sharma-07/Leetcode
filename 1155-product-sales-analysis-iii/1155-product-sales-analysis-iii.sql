# Write your MySQL query statement below
with first_year_table as (
    select product_id , min(year) as first_year 
    from sales
    group by product_id
)

select s.product_id, t.first_year, s.quantity, s.price
from sales as s join first_year_table as t
on s.product_id = t.product_id AND s.year = t.first_year

