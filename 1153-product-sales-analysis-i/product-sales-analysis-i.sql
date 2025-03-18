# Write your MySQL query statement below
select product_name,year,price from sales LEFT JOIN product on sales.product_id = product.product_id ;