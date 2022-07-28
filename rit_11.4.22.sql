Create database EMPLOYEE;
 
show databases;

use EMPLOYEE;

create table EMPLOYEE(

emp_id int(20),
emp_name varchar(20),
adress varchar(20),
email_id varchar(20),
phone int(20),
department varchar(20),
dep_id int(20),

primary key(emp_id)
);

desc EMPLOYEE;

insert into EMPLOYEE
 values( 1001,"subhranil","ramnagar 04","sd104@k.com",1236655,"ETCE",701);
 
 insert into EMPLOYEE
 values( 1002,"tanushri","bamutia","sd104@j.com",1255625,"CSE",702);
 
 insert into EMPLOYEE
 values( 1003,"hrittika","ad nagar","sd104@l.com",12300005,"CE",703);

  
 insert into EMPLOYEE
 values( 1004,"sagar","ramnagar 05","sd106@k.com",12358425,"CSE",704);
 
  
 insert into EMPLOYEE
 values( 1005,"tanu","ramnagar 04","sd104@k.com",123625,"CSE",705);
  
 insert into EMPLOYEE
 values( 1006,"bhranil","ramnagar 04","sd04@k.com",0658425,"ETCE",706);
  
 insert into EMPLOYEE
 values( 1007,"ranil","ramnagar 04","sd104@k.com",058425,"ETCE",707);
  
 insert into EMPLOYEE
 values( 1008,"anil","ramnagar 04","sd104@k.com",124288,"ETCE",708);

 insert into EMPLOYEE
 values( 1009,"nil","ramnagar 04","sd104@k.com",129625,"ETCE",709);
  
 insert into EMPLOYEE
 values( 1010,"il","ramnagar 04","sd104@k.com",1236425,"ETCE",710);
  
 insert into EMPLOYEE
 values( 1011,"asneer groover","delhi","sd104@k.org",10066525,"ETCE",711);
  
 insert into EMPLOYEE
 values( 1012,"aman gupta","mumbai","sd109@k.com",0266585,"ETCE",712);
 
  
 insert into EMPLOYEE
 values( 1013,"vinita sigh","ramnagar 04","sd104@k.com",778425,"ETCE",713);
  
 insert into EMPLOYEE
 values( 1014,"jasprit bumrah","gujrat ","sd104@k.com",1238845,"ETCE",714);
  
 insert into EMPLOYEE
 values( 1015,"namita thapar","pune","sd104@k.com",1446625,"ETCE",715);
  
 insert into EMPLOYEE
 values( 1016,"prithish","hapania","sd104@k.com",1236625,"ETCE",716);
  
 insert into EMPLOYEE
 values( 1017,"hardik pandya","surat","hp104@k.com",12658420,"ETCE",717);
  
 insert into EMPLOYEE
 values( 1018,"soumyajit","battala","sd104@k.net",1214025,"CE",718);
 
  
 insert into EMPLOYEE
 values( 1019,"virat khli","battala","sd109@k.com",125825,"ETCE",719);
  
 insert into EMPLOYEE
 values( 1020,"gulzar","ramnagar 03","sd107@k.com",12365,"ETCE",720);
 
 
--  select * from EMPLOYEE
--  where (emp_name like "a%");

 select * from EMPLOYEE
 order by dep_id
DESC;
 
  select * from EMPLOYEE
 order by dep_id
DESC;
 
   select count(*),adress from EMPLOYEE
 group by adress;
 
select avg(dep_id) from EMPLOYEE;
 
select min(dep_id) from EMPLOYEE;
  
select max(dep_id) from EMPLOYEE;
   
 
UPDATE EMPLOYEE 
SET 
    dep_id = 706
WHERE
    emp_id = 1003;
    
     select * from EMPLOYEE;
   
 desc EMPLOYEE;
 
 delete from EMPLOYEE
 where (emp_id = 1006);
 
 
 delete from EMPLOYEE  as emp where emp.emp_id in (1001);
 
 
  
 select min(emp_id) from EMPLOYEE  group by email_id;