create database serdar;
show databases ;

use serdar;

create table wer(
id int(20),
fname varchar(23),
address varchar(34),
salary float,
primary key(id));


select * from wer;

insert into wer value(22,"fish","water",4125341.12);
insert into wer value(65,"giraffe","gujarat",411.12);
insert into wer value(85,"flying_fox","amazon",4341.12);
insert into wer value(41,"rhino","kaziranga",2534.12);
insert into wer value(42,"Asiatic_lion","gir",-2534.12);


select * from wer;

select truncate(avg(salary),2) from wer;
select abs(salary) from wer;
select exp(id) from wer;
select power(41,42) from wer;
select sqrt(salary) from wer;
SELECT 
    SUM(salary)
FROM
    wer
WHERE
    id > 40;
    
select count(salary) from wer;
select upper(fname) from wer;

select ltrim(fname,'f')  as def from wer;
select to_days('2026-06-22');
select date_format(sysdate(),'%d/%m/%Y');

select replace (fname, 'rhino', 'polar_bear') from wer;
select id+100,salary from wer;

select concat(fname,"_das") from wer;