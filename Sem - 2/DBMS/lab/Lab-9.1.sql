create table cricket (
name varchar(20),
city varchar(20),
age int


)
insert into cricket values
('sachin tandulkar','mumbai',30),
('Rahul Dravid','Bombay',35),
('M.S.Dhoni','Jharkhand',31),
('Suresh Raina','Gujrat',30)
select * from cricket


SELECT * INTO WORLDCUP FROM CRICKET

SELECT NAME,CITY INTO T20 FROM CRICKET

SELECT * INTO IPL FROM CRICKET WHERE 1=2

INSERT INTO IPL SELECT * FROM CRICKET WHERE NAME LIKE '_A_____%'

DELETE FROM IPL

DELETE FROM CRICKET WHERE CITY='JHARKHAND'

SP_RENAME 'IPL','IPL2018'

DROP TABLE T20

