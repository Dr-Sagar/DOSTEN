show databases;
use employee;
show tables;
create table boats
(
cust_name varchar(20),
cust_id int(10)primary key
); 
desc boats;
select * from boats;
insert into boats values('jit',1001);
insert into boats value('hrittika',2002);




create table customer
(
acc_no int(10),
cust_id int(10)primary key,
branch_name varchar(20)
);

select * from customer;
insert into customer values(303,1001,'ramnagar');
insert into customer values(304,2002,'joy');


select cust_name,acc_no from boats,customer where boats.cust_name=customer.acc_no;
select cust_id,branch_name from boats,customer where boats.cust_name=customer.acc_no;
select * from boats inner join customer on cust_id=acc_no;
drop table boats;
drop table customer;