use mysql;
create table  Student(
Roll_no int primary key,
Name varchar(50) not null,
Branch varchar(50) not null
);

create table Exam(
Roll_no int,
S_code char(50),
Marks float,
P_code varchar(50),
foreign key Exam(Roll_no) references Student(Roll_no)
);

describe Student;
describe Exam;

insert into Student values
(1,"Jay","Computer Science"),
(2,"Suhani","Electronic and Com"),
(3,"Kirti","Electronic and Com");


insert into Exam values
(1,"CS11",50,"CS"),
(1,"CS12",60,"CS"),
(2,"EC101",66,"EC"),
(2,"EC102",70,"EC"),
(3,"EC101",45,"EC"),
(3,"EC102",50,"EC");