create table Employee(
eid int,
ename varchar(20),
department varchar(20),
salary int,
joiningdtae datetime,
city varchar(20)
)
insert into Employee values
(101,'rahul','admin',56000,'1990-1-1','rajkot'),
(102,'hardik','it',18000,'1990-9-25','ahemdabad'),
(103,'bhavin','hr',25000,'1991-5-14','baroda'),
(104,'bhoomi','admin',39000,'1991-2-8','rajkot'),
(105,'rohit','it',17000,'1990-7-23','jamnagar'),
(106,'priya','it',9000,'1990-10-18','ahemdabad'),
(107,'neha','hr',34000,'1991-12-25','rajkot')

drop table Employee
select * from Employee


select max(salary) as Maximum
from Employee


select min(salary) as Minimum
from Employee

select sum(salary) as Total_sal
from Employee

select avg(salary) as Avrage_sal
from Employee

select count(eid)
from Employee

select max(salary) 
from Employee
where Department='it'


select count(distinct city)
from Employee

select count(eid) as [from rajkot]
from employee
where city='rajkot'

select count(eid) as [from ahemdabad]
from employee
where city='ahemdabad'

select count(eid) as [from baroda]
from employee
where city='baroda'


select count(eid) as [from jamnagar]
from employee
where city='jamnagar'


select city,count(eid) from employee
group by city
having count(eid)>1


