create database student;
show databases;

use student;

create table student (emp_no int(10),
name varchar(20),
address varchar(30),
email varchar(20),
salary float,
primary key(emp_no)
);
desc student;

select * from student;
insert into student values(1001,'hrittika','mumbai','aon@.com',10000);
insert into student values(1002,'tura','london','lpa@.com',25000);
insert into student values(1003,'joyjit','china','jis@.com',50000);
insert into student values(1004,'soumyajit','paris','kso@.com',3000);
insert into student values(1005,'debalina','california','okc@.com',60000);
insert into student values(1006,'subhaparna','goa','jkc@.com',65000);

update student set salary=65000 where emp_no= 1006;

select * from student 
where salary>(45000) ; 
select * from student
where salary>(45000) and name like 'j%';

select salary,address from student order by salary DESC ;
select * from student;
insert into student values(1010,'hrittika','mumbai','aon@.com',10000);
insert into student values(1060,'hrittika','mumbai','aon@.com',10000);
insert into student values(1055,'hrittika','mumbai','kof@.com',10000);
insert into student values(1068,'hrittika','mumbai','bom@.com',10000);
insert into student values(1079,'hrittika','mumbai','plo@.com',10000);
insert into student values(1045,'hrittika','mumbai','aon@.com',10000);


delete from student where emp_no=1005;