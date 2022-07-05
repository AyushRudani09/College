create table Student_11(
Rno int,
Name varchar(20),
City varchar(20),
DID int
)

insert into Student_11 values
(101,'Raju','Rajkot',10),
(102,'Amit','Ahemdabad',20),
(103,'Sanjay','Baroda',40),
(104,'Neha','Rajkot',20),
(105,'Meera','Ahemdabad',30),
(106,'Mahesh','Baroda',10)

create table Academic_11(
Rno int,
SPI decimal(4,2),
Bklog int
)

insert into Academic_11 values
(101,8.8,0),
(102,9.2,2),
(103,7.6,1),
(104,8.2,4),
(105,7,2),
(106,8.9,3)

create table Department_11(
DID int,
DName varchar(20)
)

insert into Department_11 values
(10,'Computer'),
(20,'Electrical'),
(30,'Mechanical'),
(40,'Civil')


select Rno,Name,City from Student_11
where DID  = (select DID from Department_11 where DName = 'Computer')


select name from Student_11
where Rno in (select Rno from Academic_11 where SPI > 8)

select Rno,Name,DID from Student_11
where city = 'Rajkot'and DID = (select DID from Department_11 where DName = 'Computer')

select count(Rno) from Student_11
where DID = (select DID from Department_11 where DName = 'Electrical')

select Name from Student_11
where Rno = (select Rno from Academic_11 where spi = (select max(SPI) from Academic_11))

select Rno,Name,City from Student_11
where Rno in (select Rno from Academic_11 where Bklog>1)

select name from Student_11
where Rno = (select Rno from Academic_11 where SPI = (select max(SPI) from Academic_11 where SPI < (select max(SPI) from Academic_11)))


select Name from Student_11
where DID in(select DID from Department_11 where DName in ('mechanical','computer'))


select name from student_11
where DID = (select DID from Student_11 where Rno = 102)

select name from Student_11
where Rno in (select Rno from Academic_11 where SPI > 9) and DID = (select DID from Department_11 where DName = 'Electrical')
