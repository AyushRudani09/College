CREATE TABLE CITY(
 CITY_ID INT NOT NULL PRIMARY KEY,
 CITY_NAME VARCHAR(20) NOT NULL UNIQUE,
 PINCODE INT,
 REMARKS VARCHAR(20)
)
CREATE TABLE VILLAGE(
VILLAGE_ID INT NOT NULL PRIMARY KEY,
VILLAGE_NAME VARCHAR(20),
CITY_ID INT FOREIGN KEY REFERENCES CITY(CITY_ID)
)
INSERT INTO CITY VALUES
(1,'RAJKOT',360005,'GOOD'),
(2,'SURAT',335009,'VERY GOOD'),
(3,'Baroda',390001,'AWESOME'),
(4,'Jamnagar',361003,'SMART'),
(5,'Junagadh',362229,'Historic'),
(6,'Morvi',363641,'Ceramic')


SELECT * FROM CITY

INSERT INTO VILLAGE VALUES
(101,'Raiya',1),
(102,'Madhapar',1),
(103,'Dodka',3),
(104,'Falla',4),
(105,'Bhesan',5),
(106,'Dhoraji',5)


SELECT * FROM VILLAGE




SELECT CITY_NAME,VILLAGE_NAME FROM VILLAGE RIGHT JOIN CITY ON CITY.CITY_ID = VILLAGE.CITY_ID
WHERE VILLAGE_NAME IS NOT NULL

SELECT CITY_NAME,VILLAGE_NAME,PINCODE FROM VILLAGE RIGHT JOIN CITY ON CITY.CITY_ID = VILLAGE.CITY_ID
WHERE VILLAGE_NAME IS NOT NULL

SELECT CITY_NAME FROM VILLAGE RIGHT JOIN CITY ON CITY.CITY_ID = VILLAGE.CITY_ID
GROUP BY CITY_NAME
HAVING COUNT(VILLAGE_NAME)>1


SELECT CITY_NAME FROM VILLAGE RIGHT JOIN CITY ON CITY.CITY_ID = VILLAGE.CITY_ID
WHERE VILLAGE_NAME IS NULL

select count(*) form Temp_table
(
SELECT city_name,COUNT(CITY_NAME) FROM city left JOIN vilage ON CITY.CITY_ID = VILLAGE.CITY_ID
GROUP BY CITY_NAME
HAVING COUNT(village.CITY_ID)>1) as Temp_table




