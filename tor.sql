create database driver;

show databases;


use driver;

create table star(
sid int(8),
name varchar(17),
address varchar(20),
primary key(sid));

select * from star;

insert into star values (12,"creter","space");
insert into star values (12,"morter","aerospace");

select * from star where id=12;