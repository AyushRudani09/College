create database worker_info
use worker_info
create table person
(
WorkerId int  IDENTITY(101,1) primary key,
Firstname varchar(100)	not null,
Lastname varchar(100)	not null,
Salary decimal(8,2)		not null,
JoiningDate datetime	not null,
DepartmentId int,
DesignationId int
)

create table Department
(
DepartmentId int  primary key,
DepartmentName varchar(100) not null
)


create table Designation
(
DesignationId int primary key,
DesignationName varchar(100) not null
)

insert into Department values
(1,'Admin'),
(2,'IT'),
(3,'HR'),
(4,'Account')


insert into Designation values
(11,'Jobber'),
(12,'Welder'),
(13,'Clrke'),
(14,'Manager'),
(15,'CEO')

insert into person values
('Rahul','Anshu',56000,1990-01-01,1,12),
('Hardik','Hinsu',18000,1990-09-25,2,11),
('Bhavin','Kamani',25000,1991-05-14,null,11),
('Bhoomi','Patel',39000,2014-02-20,1,13),
('Rohit','Rajgor',17000,1990-07-23,2,15),
('Priya','Mehta',25000,1990-10-18,2,null),
('Neha','Trivedi',18000,2014-02-20,3,15)

select * from person

--• Stored Procedures
--1. All tables Insert, Update & Delete

--Insert Department
create procedure pr_insert_departmenet
@DepartmentId int,
@DepartmentName varchar(100)
AS
Begin
insert into Department(DepartmentId,DepartmentName)
values(@DepartmentId,@DepartmentName)
End
exec pr_insert_departmenet 1,Admin
exec pr_insert_departmenet 2,It
exec pr_insert_departmenet 3,HR
exec pr_insert_departmenet 4,Account


--Insert Dsignation
create procedure pr_insert_designation
@DesignationId int,
@DesignationName varchar(100)
AS
Begin
insert into Designation(DesignationId,DesignationName)
values(@DesignationId,@DesignationName)
End
exec pr_insert_designation 11,Jobber
exec pr_insert_designation 12,Welder
exec pr_insert_designation 13,Clerk
exec pr_insert_designation 14,Manager
exec pr_insert_designation 15,CEO

--Insert Person

create procedure pr_insert_person
@Firstname		varchar(100),
@Lastnamr		varchar(100),	
@Salary			decimal(8,2),
@JoiningDate	datetime,	
@DepartmentId	int,
@DesignationId	int
AS 
BEGIN
INSERT INTO person
(Firstname,Lastname,Salary,JoiningDate,DepartmentId,DesignationId)
values
(
@Firstname,
@Lastnamr,
@Salary,
@JoiningDate,
@DepartmentId,
@DesignationId	
)
END


exec pr_insert_person 'Rahul','Anshu',56000,'1990-01-01',1,12
exec pr_insert_person	'Hardik','Hinsu',18000,'1990-09-25',2,11
exec pr_insert_person'Bhavin','Kamani',25000,'1991-05-14',null,11
exec pr_insert_person'Bhoomi','Patel',39000,'2014-02-20',1,13
exec pr_insert_person'Rohit','Rajgor',17000,'1990-07-23',2,15
exec pr_insert_person'Priya','Mehta',25000,'1990-10-18',2,null
exec pr_insert_person'Neha','Trivedi',18000,'2014-02-20',3,15

--Update Department
create procedure pr_update_department
@DepartmentId int,
@DepartmentName varchar(100)
AS
Begin
update Department 
set DepartmentName = @DepartmentName
where DepartmentId = @DepartmentId
END

--Update Designation
create procedure pr_update_designation
@DesignationId int,
@DesignationName varchar(100)
AS
Begin
update Designation 
set DesignationName = @DesignationName
where DesignationId = @DesignationId
END

--Update Person
create procedure pr_update_person
@WorkerId		int,
@Firstname		varchar(100),
@Lastnamr		varchar(100),	
@Salary			decimal(8,2),
@JoiningDate	datetime,	
@DepartmentId	int,
@DesignationId	int
AS 
BEGIN
update person
set Firstname = @Firstname,
	Lastname = @Lastnamr,
	Salary = @Salary,
	JoiningDate = @JoiningDate,
	DepartmentId = @DepartmentId,
	DesignationId = @DesignationId
where WorkerId = @WorkerId
END

--Delete Department
create procedure pr_delete_department
@DepartmentId int
AS
BEGIN
delete from  Department
where DepartmentId  = @DepartmentId
END

--Delete Designation
create procedure pr_delete_designation
@DesignationId int
AS
BEGIN
delete from  Designation
where DesignationtId  = @DesignationId
END

--Delete Person
create procedure pr_delete_person
@WorkerId int
AS
BEGIN
delete from  person
where WorkerId  = @WorkerId
END



--2. All tables SelectAll (If foreign key is available than do 
create procedure pr_selectAll
AS
BEGIN
select 
WorkerId,
FirstName,
Lastname,
Salary,
JoiningDate,
DepartmentName,
DesignationName
from person inner join Department
on person.DepartmentId = Department.DepartmentId
inner join Designation
on person.DesignationId = Designation.DesignationId
END
exec pr_selectAll

--3. All tables SelectPK

--select Department 
create procedure pr_selectPK_Department
@DepartmentId int
AS
BEGIN
select * from Department
where DepartmentId = @DepartmentId
END

--select Designation 
create procedure pr_selectPK_Designation 
@DesignationId int
AS
BEGIN
select * from Designation 
where DesignationId = @DesignationId
END

--select Department 

create procedure pr_selectPK_person
@WorkerId int
AS
BEGIN
select * from person
where WorkerId = @WorkerId
END


--4. Create Procedure that takes Department Name & Designation Name as Input and Returns a
--table with Worker’s First Name, Salary, Joining Date & Department Name.

create procedure pr_4
@DepartmentName varchar(100),
@DesignationName varchar(100)
AS
BEGIN
select Firstname,Salary,JoiningDate,DepartmentName from 
person inner join Department
on person.DepartmentId = Department.DepartmentId
inner join Designation
on person.DesignationId = Designation.DesignationId
where Department.DepartmentName = @DepartmentName and Designation.DesignationName = @DesignationName
END
exec pr_4 'Admin','Welder'
--5. Create Procedure that takes FirstName as an input parameter and displays’ all the details of
--the worker with their department & designation name.
create procedure pr_5
@FirstName varchar(100)
AS
BEGIN
select 
WorkerId,
FirstName,
Lastname,
Salary,
JoiningDate,
DepartmentName,
DesignationName
from person inner join Department
on person.DepartmentId = Department.DepartmentId
inner join Designation
on person.DesignationId = Designation.DesignationId
where person.Firstname = @FirstName
END
exec pr_5 'Rahul'

--6. Create Procedure which displays department wise maximum, minimum & total salaries

create procedure pr_6
AS
BEGIN
select min(salary) AS MAXi,max(salary) AS MINI,sum(salary)  AS TOTAL,DepartmentName 
from person inner join Department
on person.DepartmentId = Department.DepartmentId
group by DepartmentName
END
exec pr_6














--VIEW


--1. Create a view that display first 100 workers details.
create view 
[First_100] 
as 
select top 100 * from person

select * from First_100


--2. Create a view that displays designation wise maximum, minimum & total salaries.

