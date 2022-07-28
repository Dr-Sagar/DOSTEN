create database employee;
show databases;
use employee;
create table employee(emp_id int(10),
emp_name varchar(20),
adrress varchar(20),
manager_id int(10),
salary float,
primary key (emp_id)
);
desc employee;
select * from employee;
insert into employee
values(1001,'rohit','udaipur',1002,10000);
insert into employee
values(1002,'arijit','bamutiya',1001,10500);
insert into employee
values(1003,'rahul','radhanagar',1004,11000);
insert into employee
values(1004,'ritesh','agartala',1005,12000);
insert into employee
values(1005,'chaman','bishalgarh',1006,12300);
insert into employee
values(1006,'pranab','ramnagar',1005,12500);
insert into employee
values(1007,'subhranil','narsingarh',1008,12400);
insert into employee
values(10010,'sagar','durgachowmuni',1009,12200);
insert into employee
values(1009,'salman','kamanchowmuni',1010,12100);
insert into employee
values(1008,'sunai','rms chowmuni',10011,12600);
select * from employee;
select e1.emp_name as EMP_NAME ,e2.emp_name as MANAGER_NAME
from employee e1 ,employee e2
where e1.manager_id=e2.emp_id
 











