create database M;

show databases;

use M;

create table N(
id int(9) primary key,
name varchar(20));



select sysdate() from dual;
select NEXT DAY (SYSDATE,'WED') FROM DUAL;