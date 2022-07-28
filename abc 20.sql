show databases;
create database ram;
use ram;


create table sailors 
(s_id int (10),
s_name varchar (20),
rating varchar (30),
age int(20),
primary key (s_id)
);

desc sailors;

create table boats 
(b_id int(10),
b_name varchar (20),
color varchar (10),
primary key (b_id)
);

desc boats;
drop table reserves;
create table reserves 
(s_id int (10),
b_id int (10),
reserve_day date,
primary key (s_id,b_id, reserve_day)
);

desc reserves;

select * from sailors;

insert into sailors value (101,'bikash','nice',20);
insert into sailors value (102,'akash','good',21);
insert into sailors value (103,'ansh','average',22);

insert into boats value (201,'b1','black');
insert into boats value (202,'b2','blue');
insert into boats value (203,'b3','red');
insert into boats value (204,'b4','red');

select * from boats ;

insert into reserves value (101,203,'2022-08-10');
insert into reserves value (102,201,'2022-08-10');
insert into reserves value (102,203,'2022-08-10');
insert into reserves value (102,201,'2021-05-11');
insert into reserves value (103,202,'2020-06-15');
insert into reserves value (103,205,'2020-06-15');

select * from reserves;

select sailors.s_name from sailors inner join reserves inner join boats
 on sailors.s_id = reserves.s_id and reserves.b_id = boats.b_id where boats.color like 'red' order by sailors.age desc;


select * from reserves e right outer join boats b on e.b_id=b.b_id;
select * from reserves e left outer join boats b on e.b_id=b.b_id;


