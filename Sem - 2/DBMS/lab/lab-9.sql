create table electrical(
rollno int,
name varchar(20)

)
select * from computer
insert into electrical values(105,'ajay'),(107,'mhesh'),(115,'manish')
update  computer 
set rollno='109' where name='haresh';


select name from computer union select name from electrical
select name from computer union all select name from electrical
select name from computer intersect select name from electrical
select name from computer except select name from electrical
select * from electrical minus select * from computer
select name from electrical union all select name from computer
select name,rollno from computer intersect select name,rollno from electrical





