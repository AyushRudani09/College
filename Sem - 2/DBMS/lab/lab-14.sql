declare @a int 
set @a = 1
while(@a<11)
begin 
print @a
set @a = @a + 1 
end




declare @a int 
set @a = 10
begin
if(@a % 2 = 0)
print 'even'
else
print 'odd'
end


declare @a int 
set @a = 1
while(@a<11)
begin 
if @a%2!=0
print @a
set @a = @a + 1 
end


declare @a int,@sum int
set @sum=0
set @a = 0
while(@a<50)
begin 
set @sum = @sum+@a
set @a = @a + 1 
end
print @sum



declare @a int,@sum int
set @sum = 0
set @a = 1
while(@a<21)
begin 
if @a%2=0
set @sum = @sum + @a
set @a = @a + 1 
end
print @sum