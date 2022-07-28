show databases;
use employee;


select * from employee;

insert into employee values (10001, 'abc', 90976, 01, 1001);
insert into employee values (10002, 'aec', 53445, 03, 1005);
insert into employee values (10003, 'arc', 98765, 02, 1004);
insert into employee values (10004, 'atc', 77544, 05, 1006);
insert into employee values (10006, 'ajc', 5678, 07, 1007);

insert into employee(emp_id, j_date) values(10008, '2022-06-06');


select adddate(j_date, -1) from employee;


alter table employee add (j_date Date);

insert into employee values (10007, 'ajcsldfjdslkf', 5678, 07, 1007);


show tables;
select mod( (salary),5) from employee;

select abs (salary) from employee;
select round(avg (salary),2) from employee;
select sqrt(em_id) from employee;
SELECT sum(salary) from employee;

select min(salary) from employee;
select max(salary) from  employee;
select lower(emp_name) from employee;
select count(salary) from employee;
select upper(emp_name) from employee;

select concat(emp_name, salary) from employee;


select rpad(emp_name, 10, '*') from employee;

select length(emp_name) from employee;

