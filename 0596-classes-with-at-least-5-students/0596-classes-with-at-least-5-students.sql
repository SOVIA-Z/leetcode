# Write your MySQL query statement below
select class
from Courses
GROUP BY class
having COUNT(student) >= 5;