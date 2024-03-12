use mysql;
create table Employee(
Employee_id int,
First_name varchar(100),
Last_name varchar(100),
Salary float,
Joining_date date,
Department varchar(100)
);

create table Incentive(
Employee_ref_id int,
incentive_date date,
Incentive_amount float,
foreign key Incentive(Employee_ref_id) references Employee(Employee_id)
);

describe Employee;
describe Incentive;

insert into Employee values
(1,"John","Abraham",1000000,"01-JAN-13 12.00.00 AM","Banking"),
(2,"Michael","Clarke",800000,"01-JAN-13 12.00.00 AM","Insurance"),
(3,"ROy","Thomas",700000,"01-FEB-13 12.00.00 AM","Banking"),
(4,"Tom","Jose",600000,"01-FEB-13 12.00.00 AM","Insurance"),
(5,"Jerry","Pintoo",650000,"01-FEB-13 12.00.00 AM","Insurance"),
(6,"Philip","Mathew",750000,"01-JAN-13 12.00.00 AM","Services"),
(7,"TestName1","123",650000,"01-JAN-13 12.00.00 AM","Services),
(8,"TestName2","Lname%",600000,"01-FEB-13 12.00.00 AM","Insurance");

insert into Incentive values
(1,"01-FEB-13",5000),
(2,"01-FEB-13",3000),
(3,"01-FEB-13",4000),
(1,"01-JAN-13",4500),
(2,"01-JAN-13",3500);

select * from Employee;
select * from Incentive;




