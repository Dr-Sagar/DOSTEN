create database Easter;

use easter;

create table employee(
id int(20),
e_name varchar(20),
address varchar(20),
salary float,
dep_name varchar(20),
m_id int(20),
dep_code varchar(20),
primary key(id),
foreign key (dep_code) references department(dep_code));


create table department(
dep_code varchar(20),
m_id int(20),
dep_name varchar(20),
primary key(dep_code));

alter table department add (foreign key (m_id) references employee(id));
drop table department;

alter table department add (manager varchar(90));
alter table department drop manager;

desc department;

select * from employee;

insert into employee values (12,"Ashfar","Dimapur",15000,"CSE",16,"CS02");
insert into employee values (17,"Arvind","Dispur",12000,"ECE",13,"EC02");
insert into employee values (13,"Aajbeer","Daman",22000,"ECE",13,"EC02");
insert into employee values (19,"Armaan","Dippur",19000,"ECE",13,"EC02");
insert into employee values (16,"Aabir","Dimsagar",13000,"CSE",16,"CS02");
insert into employee values (10,"Arbaan","Dhyal",17000,"CSE",16,"CS02");
insert into employee values (11,"Anikesh","Dhiman",18000,"CE",16,"CS02");

SELECT * FROM department;

insert into department values ("CS02",16,"CSE");
insert into department values ("EC02",13,"ECE");
insert into department values ("ME02",13,"ECE");


select e_name,salary from employee where dep_name = "ECE"
order by salary
DESC;


create view contractual as
select id,e_name,salary
from employee;



drop view contractual;

select * from contractual;





select replace (e_name, "Arbaan","Asish") from employee;

select salary+100 , salary from easter.employee;

select ltrim (e_name,"A") as def from easter.employee;

select date_format(sysdate(),'%y/%m/%d');


select * from easter.employee natural join easter.department where
 employee.dep_code = department.dep_code ;
 
 select * from easter.employee left outer join easter.department on
 employee.dep_code = department.dep_code ;
 
select * from easter.employee full inner join easter.department;

select * from easter.employee right outer join easter.department on
 employee.dep_code = department.dep_code ;
 
 
select e_name from easter.employee full outer join easter.department on employee.dep_code = department.dep_code;
select * from easter.employee full  join easter.department;
 
 
 SELECT L.e_name, L.address, B.dep_code
FROM employee L FULL OUTER JOIN department B
ON L.dep_code=B.dep_code;




select * from department;
select * from employee;


