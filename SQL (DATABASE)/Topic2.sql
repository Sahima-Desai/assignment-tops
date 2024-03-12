use mysql;
Create table Salesperson(
SNo int,
SNAME varchar(100),
CITY varchar(100),
COMM float
);

Create table Customer(
CNM int,
CNAME varchar(100),
CITY varchar(100),
RATING int,
SNo int
);

describe Salesperson;
describe Customer;

insert into Salesperson values
(1001, "Peel", "London", .12),
(1002,"Serres", "San jose", .13),
(1004,"Motika", "London", .11),
(1007,"Rafkin", "Barcelona", .15),
(1003,"Axelrod","New York",.1);

insert into Customer values
(201,"Hoffman","London",100,1001),
(202,"Giovae","Roe",200,1003),
(203,"Liu","San Jose", 300,1002),
(204,"Grass","Barcelona",100,1002),
(206,"Clemens","London",300,1007),
(207,"Pereira","Roe",100,1004);


select * from Salesperson;
select * from Customer;

drop table Salesperson;
drop table customer;

select SName as Salesperson_Name, s.City, s.Comm
from Salesperson s
inner join Customer c on s.SNo=c.SNo
where c.CITY='London' and s.COMM>0.12;

select *
from Salesperson 
where city in ('Barcelona','London');

select *
from Salesperson 
where COMM>0.10 and COMM<0.12;

select *
from customer
where RATING >100 OR (CITY='ROME' and RATING <=100);

select * from Salesperson;