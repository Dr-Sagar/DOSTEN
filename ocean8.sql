create database seed;

show databases;

use  seed;

create table employee(
emp_id int (10),
emp_name varchar(20),
salary float,
dep_name varchar(90),
primary key(emp_id));


insert into  employee  values (12,"arman",21000,"electrical");
insert into  employee  values (15,"konad",26000,"electrical");
insert into  employee  values (17,"faran",21000,"computer");
insert into  employee  values (77,"riyan",31000,"MECHANICAL");

SELECT emp_id, SUM(salary) FROM EMPLOYEE GROUP BY emp_id;

SELECT emp_name FROM EMPLOYEE WHERE dep_name IN
 (SELECT dep_name FROM EMPLOYEE GROUP BY dep_name HAVING avg(salary>10000));