create database attendance;

show databases;

use attendance;

create table y_2020(
roll int(50) auto_increment,
s_name varchar(55),
semester varchar(55)default "2nd",
branch varchar(55) default "CST",
c_date datetime default current_timestamp,
present bool default false,
primary key(roll));

drop table y_2020;
   
   
select * from Y_2020;

insert into Y_2020 value(2063050000,"","2nd","CST",2022-06-13 07:18:17,false);

select * from Y_2020;