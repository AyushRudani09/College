create table Student_Master(
	StudentID int not null primary key,
	Enrollment_No varchar(20) not null unique,
	Name varchar(25) not null,
	CPI decimal(5,2) not null check(CPI < 10),
	JoiningDate datetime  default getdate(),
	Bklog int not null check(Bklog >= 0),
	CityID int not null FOREIGN KEY REFERENCES City_Master(CityID)
)
create table City_Master(
	CityID int not null primary key IDENTITY(1,1),
	CityName varchar(20) not null unique,
	PinCode varchar(10) null,
	STDCode varchar(10) null
)
insert into Student_Master 
values('10101','21','fdtg','5','','4','1')
insert into City_Master values('dffg','541','65146')
select * from City_Master
select * from Student_Master