show databases;
create  database  EMPLOYEE;
use employee;

create table EMPLOYEE(emp_id int(10),
 emp_name varchar(20),
 address varchar(30),
 email varchar(20),
 salary float,
 dep_id int(10),
 primary key(emp_id)
 );
 desc employee;
 insert into employee
  values(1001,'ram','india','d@a.com',1001,01);
  insert into employee
  values(1002,'sham','delhi','b@a.com',1002,02);
  insert into employee
  values(1003,'jadhu','america','c@b.com',1003,03);
  insert into employee
  values(1004,'ramu','china','b@a.com',1004,04);
  
  select * from employee
where (salary>500) and (emp_name like"r%");
  update employee set salary =1500 where emp_id=1003;
  SELECT salary,emp_name,address from employee order by salary DESC;
  delete from employee where emp_id=1002;
  
  
