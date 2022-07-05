create table student_12(
rno int,
name varchar(20),
branch varchar(3)
)

create table result_12(
rno int,
spi decimal(4,2)
)
drop table result_12
insert into student_12 values
(101,'Raju','CE'),
(102,'Amit','CE'),
(103,'Sanjay','ME'),
(104,'Neha','EC'),
(105,'Meera','Ee'),
(106,'Mahesh','ME')


insert into result_12 values
(101,8.8),
(102,9.2),
(103,7.6),
(104,8.2),
(105,7.0),
(106,8.9)
 select * from result_12




 CREATE PROCEDURE joins
 as
 
 select student_12.rno,name,branch,spi from student_12 full outer join result_12 on  student_12.rno = result_12.rno
 go

 joins


 DROP PROCEDURE joins1     //for delele PROCEDURE


 create procedure spprint
 @Rno int
 as 
 begin
 select * from student_12
 where rno=@Rno
 end

 spprint 101


 create procedure spinsert
 @Rno int , @Name varchar(20) , @Branch varchar(3)
 as 
 insert into student_12
 values(@Rno,@Name,@Branch)
 go

 spinsert 107,Raj,EE

 select * from student_12

 create procedure spupdate
 @Rno int ,@Branch varchar(3)
 as 
 update  student_12
 set branch = @Branch
 where rno = @Rno
 go

 spupdate 101,EE

 select * from student_12

 create procedure spdelete
 @Rno int
 as 
 delete from student_12
 where rno =@Rno
 go

 spdelete 107

 select * from student_12
