create database employee_info
use employee_info
create table employee
(
EID int,
Ename varchar(100),
gender varchar(10),
joiningdate datetime,
salary decimal(8,2),
city varchar(100)
)

insert into employee
values
(1,'nick','male',1913-01-01,4000,'london'),
(2,'Julian','Female',1914-10-01,3000,'New York'),
(3,'Roy','male',1916-06-01,3500,'london'),
(4,'Tom','male',null,4500,'london'),
(5,'Jerry','male',1913-02-01,2800,'Sydney'),
(6,'Philip','male',1915-01-01,7000,'New York'),
(7,'Sara','Female',1917-08-01,4800,'Sydney'),
(8,'Emily','Female',1915-01-01,5500,'New York'),
(9,'Michael','male',null,6500,'london'),
(10,'John','male',1915-01-01,8800,'london')


select * from employee
where ename like 'm__h%' 

select power(3,5) as output

select dateadd(day, 20 ,getdate()) as date_20

select * from employee 
where ename like 'j%n%'

select substring('SQL Programming',2,9)

select * from employee
where city like '___ney'

DECLARE @Number INT
SET @Number=15
SELECT CAST(@Number as varchar(10)) as Number

alter table employee
add department varchar(20)

update employee
set department = 'Marketing' 
where city = 'london'

select * from employee
where ename like '%n' or ename like '%y'

select floor(63.1)
select floor(63.8)
select floor(-63.2)

select * from employee 
where joiningdate is null

select upper(ename),LOWER(city) from employee

alter table employee
alter column ename char(30)

select max(salary),city from employee
group by city
order by city

select * from employee

select right(ename,3) from employee
SELECT  CONCAT(ename , 'works at ' , city , 'and earn ',salary) from employee

select count(ename) from employee
where salary > 5000

select substring(ename,0,4) from employee