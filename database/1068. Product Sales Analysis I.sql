-- Problem: https://leetcode.com/problems/product-sales-analysis-i/description/

-- Solution #01: Runtime 1883 ms
select product.product_name, sales.year, sales.price from sales left join product on sales.product_id = product.product_id;