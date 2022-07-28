
show databases;

use employee_db;

create table employee (emp_id int(10),
name varchar(20),
address varchar(30),
email varchar(20),
salary float,
dep_id int(10),
primary key(emp_id));

desc employee;

insert into employee
 values(1001,'John','london','a@b.com',1000,01);
 
desc employee;



insert into employee
 values(1002,'tanushri','delhi','a@c.com',1001,02);
 
 
 insert into employee
 values(1003,'ritesh','dibrugarh','s@r.com',1004,03);
 
 select count(*) from employee;
 
 select * from employee
    where emp_id=1002;
    
     select * from employee
    where salary>1000;
 
select * from employee;