create table Student_13(
RNo int,
Name varchar (50),
Branch varchar (50),
SPI Decimal (4,2),
Bklog Int
)

insert into Student_13 values
(101,'Raju','CE',8.8,0),
(102,'Amit','CE',2.2,3),
(103,'Sanjay','ME',1.5,6),
(104,'Neha','EC',7.65,1),
(105,'Meera','EE',5.52,2),
(106,'Mahesh','EC',4.5,3)

select * from Student_13


create view personal as
select * from Student_13

select * from personal

create view Student_Details as
select name,branch,SPI from Student_13

select * from Student_Details

create view Academic as
select RNo, Name, Branch from Student_13

select * from Academic

create view Student_Data as
select * from Student_13
where Bklog > 2

create view Student_Pattern as
select RNo, Name, Branch from Student_13
where name like '____'

select * from Student_Pattern

insert into Academic values(107, 'Meet', 'ME')

update Academic set Branch = 'ME' where Name='amit'

delete from Academic where Rno = 104

create view Display as
select * from Student_13
where SPI > 9.5

select * from Display

create view Bklog_0 as
select * from Student_13
where Bklog=0

select * from Bklog_0