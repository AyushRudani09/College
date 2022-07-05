create table Student_Marks(
S_id int IDENTITY(1,1) primary key,
Sname varchar(15),
Marks int
)
insert into Student_Marks
values
('John',90),
('Martin',80),
('Carol',89),
('Jack',99),
('Rose',88),
('Mary',90)
select * from Student_Marks
drop table Student_Marks
delete from  Student_Marks
where S_id=1
x


select count(S_id) as Total_Row
from Student_Marks 

select sum(Marks) as Total_Marks
from Student_Marks

select avg(Marks) as Avrage_Marks
from Student_Marks

select min(Marks) as Min_Marks
from Student_Marks

select max(Marks) as Max_Marks
from Student_Marks

