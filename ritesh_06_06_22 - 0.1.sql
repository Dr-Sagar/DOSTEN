create database freelancer;

show databases;

use  freelancer;

create table customer(
id int(20),
c_name varchar(20),
c_age int (20),
c_address varchar(20),
primary key(id))


select * from freelancer;
select * from customer;

 insert  into customer value(12,"sayantika",33,"ramnagar");
 
 insert  into customer value(13,"tika",36,"laxmannagar");
 
 insert  into customer value(17,"sayan",01,"bharatnagar");
 
 insert  into customer value(22,"ayan",112,"nagar");
 
 insert  into customer value(69,"yann",78,"ramnagar");
 
 
 
 create view p_member as
 select id,c_name
 from customer;
 
 select * from p_member;
 
  insert  into p_member value(12,"avantika");
  
  
  select * from customer;
  
 create or  REPLACE view p_member AS 
  select upper( c_name)
  from customer
  where id > 50;
  
  
   create view p_partner as
 select c_name,c_address
 from customer;
 
  
  
  use freelancer;
  
  create table members(
id int(20),
m_name varchar(20),
m_age int (20),
m_address varchar(20),
primary key(id));
  
  
  select * from members;
  
insert  into members value(12,"sayantika",33,"ramnagar");
 
 insert  into members value(13,"tika",36,"laxmannagar");
 
 insert  into members value(17,"sayan",01,"bharatnagar");
 
  
  
  
  
  
  select * from customer left outer join members on customer.id = members.id;
  

    
    
    
    
    
    