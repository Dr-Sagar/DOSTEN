create database restaurant;

show databases;

use  restaurant;

create table items(
item_no int(20),
item_name varchar(20),
category varchar(20),
primary key (item_no));

desc items;


use  restaurant;

create table customer(
customer_id int(20),
customer_name varchar(20),
gender varchar(20),
address varchar(20),
telephone int(20),
primary key (customer_id));

desc customer;


use  restaurant;


create table orders(
order_no int(20),
customer_id int(20),
item_no int(20),
primary key (order_no),
foreign key (customer_id) references customer(customer_id),
foreign key (item_no) references items(item_no));

desc orders;

select * from restaurant;
select * from items;

 insert  into items value(1,"red sauce pasta","pasta");
 
 insert  into items value(13,"tika","laxmannagar");
 
 insert  into customer value(11,"ritesh","male","ramnagar",9087);
 
 insert  into customer value(12,"chinku","male","ramnagar",456);
 
 insert  into orders value(77,11,1);
 
 insert  into orders value(78,12,13);
 
 select * from customer;
 
 select telephone from customer where customer_id in ( select customer_id from orders where item_no in (select item_no from items where item_name like 'red sauce pasta'));



 
 
