create table student_marks(
sid int,
sname varchar(30),
marks int
)
insert into student_marks values
(2,'martin',80),
(3,'carol',89),
(4,'jack',99),
(5,'rose',88),
(6,'mary',90)
select * from student_marks
select count(*)
from student_marks

select sum(marks)
from student_marks

select cast(avg(marks) as decimal(10,4))
from student_marks



select min(marks)
from student_marks

select max(marks)
from student_marks

