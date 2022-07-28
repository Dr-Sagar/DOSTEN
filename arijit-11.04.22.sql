show databases;
use employee;

create table emp_tb(emp_id int(10),
emp_name varchar(20),

salary float,
dep_code varchar(20),
supervisor_id int(10),
primary key(emp_id)
);
desc emp_tb;

alter table department add dep_code varchar(20);

drop table department;
create table department(dep_code varchar(20),
dep_description varchar(20),
hod varchar (48),
dep_name varchar(70),
primary key(dep_code)
);
alter table department drop hod;

alter table department add hod int;
desc department;
select * from emp_tb;

  insert into emp_tb values(1001,'subhranil',40000,'CSE',1001);
 insert into emp_tb values(1002,'s',4000,'CSE	',1002);
 insert into emp_tb values(1003,'sil',54000,'CSE	',1003);
 insert into emp_tb values(1004,'anil',14000,'CSE',1004);
 insert into emp_tb values(1005,'nil',34000,'CSE	',1005);
 
 delete from emp_tb where emp_id = 1002;

select * from department;
insert into department values('Cte','c',1001,'cse');
insert into department values('Cte','c',1002,'cse');
insert into department values('Cte','c',1003,'cse');
insert into department values('Cte','c',1004,'cse');
insert into department values('Cte','c',1005,'cse');

delete from department where dep_name = 'c';

alter table emp_tb add foreign key(dep_code) references department(dep_code);

alter table department add foreign key(hod) references emp_tb(emp_id);

insert into department (dep_code, dep_description, dep_name) values('cs', 'computer science', 'cst');
desc emp_tb;

insert into emp_tb (emp_id, emp_name, salary, dep_code) values(1001, 'john', 10000, 'cs');
insert into emp_tb (emp_id, emp_name, salary, dep_code) values(1002, 'smith', 10000, 'cs');

update emp_tb set supervisor_id=1001 where emp_id = 1001;