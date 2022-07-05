select getdate() as Todat_Date
select dateadd(year,1 , getdate())
SELECT FORMAT('1994 5 5 12', 'MMMM dd yyyy hhtt')
SELECT FORMAT(getdate(), 'MMMM dd yyyy hhtt')
select format(getdate(), 'dd MMMM yyyy')
select format(getdate(), 'MMMM dd,yy')
select datediff(month, '2031/12/08' , '2031/03/09')
select datediff(year , '2010/01/25' , '2012/08/10')
select datediff(hour , '2012/01/25 07:00' , '2012/01/26 10:30')
select day('12-may-16') as day
select month('12-may-16') as month
select year('12-may-16') as year
select dateadd(year,5,getdate())
select dateadd(month,2,getdate())
select datename(month,getdate())
select datepart(month,getdate())
select eomonth(getdate())
select dateadd(day,30 , getdate())
select datediff(year,'09-11-2003' , getdate()) ,datediff(month,'09-11-2003' , getdate())
