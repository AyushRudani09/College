create database Students
create table Students(
stuid int,
firstname varchar(25),
lastname varchar(25),
website varchar(50),
city varchar(25),
division varchar(25)
)
delete from students
where stuid=1088
insert into  Students values
(1077,null,null,null,null,null),
(1088,null,null,null,null,null)
update Students
set city = 'baroda'
where stuid=1066
select * from Students	
SELECT * FROM Students
WHERE firstname like '[a-h]%'
SELECT cos(2)
select sin(2)
select pi()
