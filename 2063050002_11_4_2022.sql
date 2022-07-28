use employee_db;
create table employee (emp_id int(10),
emp_name varchar(20),
address varchar(30),
email varchar(20),
salary float,
primary Key(emp_id)
);

desc employee;
 
 
insert into employee values(1000,'sindhu','america','sindhupv.@034',50000,01);
insert into employee values(1003,'joyjit','london','joy@004', 11200,03);
insert into employee values(1004,'debalina','hyderabad','debalinadebnath@22', 11400,04);
insert into employee values(1006,'samyukta', 'bangalore', 'samyuktamansa@224', 11389,08);

update employee set salary= 50000 where emp_id=1000;

select * from student
where salary>(45000);
select * from student
where salary>(45000) and name like'j%';

select salary, address from student order by salary DESC;
select * from student;
insert into student values(1000, 'sindhu', 'america','sindhupv.@034', 50000,01






