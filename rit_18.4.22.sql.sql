create database chinku;

show databases;

use chinku;

Create table employee(

emp_id int(20), 
emp_name varchar(20),
address varchar(20),
manager_id int(20),
salary float,

primary key(emp_id)
);

desc employee;




select* from employee;


insert  into employee 
values(1001,'sd','mumbai',1009,50000.223);

insert  into employee 
values(1002,'sd','mumbai',1005,50000.52);

insert into employee
values( 1004,"sagar","ramnagar 05",1005,50000.23);
 
  
 insert into employee
 values( 1005,"tanu","ramnagar 04",1009,50.000);
  
 insert into employee
 values( 1006,"bhranil","ramnagar 04",1009,500.00);
  
 insert into employee
 values( 1007,"ranil","ramnagar 04",1009,500.00);
  
 insert into employee
 values( 1008,"anil","ramnagar 04",1005,500.00);

 insert into employee
 values( 1009,"nil","ramnagar 04",1009,500.00);
  
 insert into employee
 values( 1010,"il","ramnagar 04",1009,50.00);
  
 insert into employee
 values( 1011,"asneer groover","delhi",1009,5000.0);
  
 insert into employee
 values( 1012,"aman gupta","mumbai",1009,500.00);
 
  
 insert into employee
 values( 1013,"vinita sigh","ramnagar 04",1009,500.00);
  
 insert into employee
 values( 1014,"jasprit bumrah","gujrat ",1009,500.00);
 
 
 select * from employee;
 
 select e1.emp_name as EMP_NAME , e2.emp_name as MANAGER_NAME
	from employee e1 , employee e2
	where e1.manager_id = e2.emp_id
