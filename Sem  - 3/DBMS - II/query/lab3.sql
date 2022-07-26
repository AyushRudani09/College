create database person_info
use person_info
create table person(
personid int primary key,
personname varchar(100) not null,
departmentid int,
salary decimal(8,2) not null,
joiningdate datetime not null,
city varchar(100) not null
)
create table department(
departmentid int primary key,
departmentname varchar(100),
departmentcode varchar(50),
location varchar(50)
)

insert into person values
(101,'Rahul Tripathi',2,56000,01-01-2000,'Rajkot'),
(102,'Hardik Pandya',3,18000,25-09-2001,'Ahmedabad'),
(103,'Bhavin Kanani',4,25000,14-05-2000,'Baroda'),
(104,'Bhoomi Vaishnav',1,39000,08-02-2005 ,'Rajkot'),
(105,'Rohit Topiya',2,17000,23-07-2001,'Jamnagar'),
(106,'Priya Menpara',null,9000,18-10-2000,'Ahmedabad'),
(107,'Neha Sharma',2,34000,25-12-2002,'Rajkot'),
(108,'Nayan Goswami',3,25000,01-07-2001,'Rajkot'),
(109,'Mehul Bhundiya',4,13500,09-01-2005,'Baroda'),
(110,'Mohit Maru',5,14000,25-05-2000,'Jamnagar')

insert into department values
(1,'Admin','Adm','A-block'),
(2,'Computer','CE','C-block'),
(3,'Civil','CI','G-block'),
(4,'Electrical','EE','E-block'),
(5,'Mechanical','ME','B-block')

--1. Find all persons with their department name & code.
SELECT
Person.PersonName,
Department.DepartmentName,
Department.DepartmentCode
FROM Person
INNER JOIN Department
ON Person.DepartmentID=Department.DepartmentID
--2. Give department wise maximum & minimum salary with department name.
--3. Find all departments whose total salary is exceeding 100000.
--4. Retrieve person name, salary & department name who belongs to Jamnagar city.
--5. Find all persons who does not belongs to any department.
--6. Find department wise person counts.