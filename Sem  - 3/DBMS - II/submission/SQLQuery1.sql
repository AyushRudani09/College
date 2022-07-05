create database assignment1
use assignment1




create table mst_city(
cityid int primary key,
cityname varchar(250),
pincode varchar(6),
stateid int not null,
cityremarks varchar(500),
FOREIGN KEY (stateid) REFERENCES mst_state(stateid)
)




create table mst_state(
stateid int primary key,
statename varchar(100)
)




select * from mst_city
select * from mst_state
drop table mst_city
drop table mst_state





create Procedure pr_mst_city_select_all
as
begin
select cityid,cityname,pincode,cityremarks,mst_city.stateid,statename from mst_city 
inner join mst_state 
on mst_city.stateid = mst_state.stateid
end

EXEC pr_mst_city_select_all;

create Procedure pr_mst_city_insert
@cityid			 int,
@cityname		 varchar(250),
@pincode		 varchar(6),
@stateid		 int,
@cityremarks	 varchar(500)
as
begin
insert into mst_city 
(cityid,cityname,pincode,stateid,cityremarks)
values
(@cityid,@cityname,@pincode,@stateid,@cityremarks)
 end




create Procedure pr_mst_city_update
@cityid			 int,
@cityname		 varchar(250),
@pincode		 varchar(6),
@stateid		 int,
@cityremarks	 varchar(500)
as
begin
update mst_city
set cityname =  @cityname,
	pincode = @pincode,
	stateid = @stateid,
	cityremarks = @cityremarks
where cityid = @cityid
end

 



create Procedure pr_mst_city_delete
@cityid int
as 
begin
delete from mst_city
where cityid = @cityid
end




create Procedure pr_mst_city_selcetPK
@cityid int
as 
begin
select * from mst_city
where cityid = @cityid
end




create Procedure pr_mst_city_pincode360
as 
begin
select * from mst_city
where pincode like '360%'
end



create Procedure pr_mst_city_citynamepincode
@cityname varchar(250),
@pincode varchar(6)
as 
begin
select * from mst_city
where citynam = @cityname
and 
pincode = @pincode
end


create Procedure pr_mst_city_selcetbycityremarks
@cityremarks varchar(500)
as 
begin
select * from mst_city
where cityremarks = @cityremarks
end



create Procedure pr_mst_city_selcetstateid
@stateid int
as 
begin
select * from mst_city
where sateid = @stateid
end




create Procedure pr_mst_city_selcetstateidcityid
@cityid int,
@stateid int 
as 
begin
select * from mst_city
where cityid = @cityid
and 
stateid = @stateid
end

create Procedure pr_h
@cityid int = not null,
@cityname varchar(250) 
as 
begin
update mst_city
set cityname = @cityname
where cityid = @cityid
end