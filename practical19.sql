/*
Create a student database and compute the results.

1. Create a table for class of students with the following fields.
    Field Name     Type
	  id		         int
	  name 		       varchar(10)
	  sub1 		       int
	  sub2           int
		sub3 		   		 int
		sub4 		   		 int
		sub5 		   		 int
		sub6           int

2. Add records into the table for 10 students.

3. Display the description of the fields in the table using DESC.

3. Alter the table and calculate total and percentage.

4. Compute the RESULT as “PASS” or “FAIL” by checking if the student has
scored more than 35 marks in each subject.

5. List the contents of the table.

6. Retrieve only ID and NAME of all the students.

7. List the students who have result as “PASS”.

9. List the students who have result as “FAIL”.

10. Count the number of students who have passed.

11. Count the number of students who have failed.

12. List the students who have percentage greater than 60.

13. Sort the table according to the order of NAME.

Author : @ChaitanyaJoshiX
*/

create database student; -- Creating Database

use student;

create table stud -- Creating Table
(
	id int,
  name varchar(15),
	sub1 int,
	sub2 int,
	sub3 int,
	sub4 int,
	sub5 int,
	sub6 int
);

-- Inserting items
insert into stud values(100,'ADVAIT', 56, 36, 56, 78, 44, 67);
insert into stud values(101,'BINOD', 86, 85, 48, 73, 72, 47);
insert into stud values(102,'CHANDAN',65, 82, 58, 72, 100, 91);
insert into stud values(103,'DHEERAJ',87, 64, 66, 73, 89, 95);
insert into stud values(104,'ESHAAN',50, 81, 54, 85, 65, 79);
insert into stud values(105,'FAROUKH',98, 85, 20, 45, 94, 52);
insert into stud values(106,'GANPAT',93, 76, 59, 70, 85, 60);
insert into stud values(107,'HIREN',55, 60, 74, 79, 57, 85);
insert into stud values(108,'INDRA',75, 63, 99, 56, 74, 67);
insert into stud values(109,'JOHN',19, 63, 50, 82, 63, 83);

describe stud; -- Displaying description of fields

-- Adding items
alter table stud add(total int);
alter table stud add(percentage int);
alter table stud add(result varchar(4));

-- Updating items
update stud set total = sub1 + sub2 + sub3 + sub4 + sub5 + sub6;
update stud set percentage = (total/6)*100;
update stud set result = "Pass" where sub1 >= 35 and sub2 >= 35 and sub3 >= 35 and sub4 >= 35 and sub5 >= 35 and sub6 >= 35;
update stud set result = "Fail" where sub1 <35 or sub2 <35 or sub3 <35 or sub4 <35 or sub5 <35 or sub6 <35;

select * from stud; -- Displaying the table

select id,name from stud; -- Displaying id and name of all students

select name from stud where result = "Pass"; -- Displayng names of students that passed

select name from stud where result = "Fail"; -- Displayng names of students that failed

select count(*) from stud where result = "Pass"; -- Counting names of students that passed
select count(*) from stud where result = "Fail"; -- Counting names of students that failed

select name from stud where percentage>60; -- Displayng names of students who have perc greater than 60

select * from stud order by name; -- Displaying sorted table by alphabetical order of names
