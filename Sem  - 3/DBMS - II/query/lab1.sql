create database Student_info

use Student_info

create table Student_1
(
Stuid int,
Name varchar(100),
EnrllmentNo varchar(120),
Division varchar(50),
Sem int,
BirthDate datetime,
Email varchar(100),
ContactNo varchar(50)
)


insert into Student_1
values
(101,'Namish Patel','090200107051','BCX-3', 3 ,1992-12-06 ,'namishp49@gmail.com','88988787758'),
(102,'Firoz A. S.','090200107090','BCY-3',3,1994-05-03,'Firoz.me@gmail.com','8885999922'),
(103,'Krunal Vyas','090243107101','BCZ-5',5,1984-03-01,'krunalvyas@gmail.com','9990888877'),
(104,'Vijay Patel','090200107102','BCX-5',5,1985-02-15 ,'vijaypatel@gmail.com','8787878787'),
(105,'Vimal Trivedi','090200107103','BCY-3',3,1988-01-20,'mauliktrivedi@gmail.com','8789564512')

select * from Student_1

select name from Student_1
where sem in(3,5)

select name from Student_1
where sem = 3 or sem = 5

select name, EnrllmentNo from Student_1
where stuid  between 103 and 105

select name, EnrllmentNo from Student_1
where stuid >= 103  and Stuid <= 105

select name, EnrllmentNo,Email from Student_1
where sem = 5 

select top 3 * from Student_1

select top 30percent name, Enrllmentno from Student_1
where ContactNo like '%7'

select distinct sem from Student_1

select * from Student_1
where EnrllmentNo is null

select * from Student_1
where name not like 'v%'

select * from Student_1 
where email like '%3@g%' and email like '______'

select * from Student_1
where name like 'f_r%'

select * from Student_1
where ContactNo like '%877%'

select * from Student_1
where sem  = 3 and ContactNo not like '%8' and ContactNo not like '%9%'

select * from Student_1
where BirthDate > 1990-01-01

update Student_1 
set Division = 'BCX-5' , sem = 5 
where Stuid = 102

select * from Student_1

update Student_1
set name = 'Firoz Sherasiya'
where email = 'Firoz.me@gmail.com' and ContactNo = '8885999922'

alter table student_1
add city varchar(20)

delete from Student_1
where division =  'BCX-3'

sp_rename 'student_1.email' , 'emailaddress'

use Student_info
select * into student_new  from student_1
select * from student_new

truncate table student_1

/* display student details in order of sem 
update table name student_1 to student_computer
create table that only has details of 3rd sem students
display details of students who belong from sem 5 in  order of name
gives rollno to student in order by name */
