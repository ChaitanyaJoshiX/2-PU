/*
Generate the Employee details and compute the salary based on the department.

1. Create the following table EMPLOYEE
   Field Name  Type
   EMP_ID      int
   DEPT_ID     int
   EMP_NAME    VARCHAR(15)
   EMP_SALARY  int

2. Create another table DEPARTMENT
Field Name Type
DEPT_ID    int
DEPT_NAME  VARCHAR2(20)
SUPERVISOR VARCHAR2(20)

3. Enter 10 rows of data for table EMPLOYEE and 4 rows of data for DEPARTMENT
table.

4. Find the names of all employees who work for the Accounts department.

5. Find how many employees work for Accounts department.

3. Find out the Minimum, Maximum and Average salary of employees working for
Accounts department.

4. List the employees working for particular supervisor.

5. Retrieve the department names where only one employee works.

6. Increase the salary of all employees in the sales department by 15%.

7. Add a new Column to the table EMPLOYEE called BONUS  and
compute 5% of the salary to the said field.

8. Delete all the rows for the employee in the Apprentice department.

Author : @ChaitanyaJoshiX
*/

create database emp;
use emp;

create table employee -- Creating Table employee
(
  empid int,
  depid int,
  name varchar(10),
  salary int
);

create table department -- Creating Table department
(
  depid int,
  depname varchar(15),
  supervisor varchar(10)
);

-- Inserting items into employee
insert into employee values(100, 20, 'ADVAIT', 44000);
insert into employee values(101, 10, 'BINOD', 85000);
insert into employee values(102, 10, 'CHANDAN', 82000);
insert into employee values(103, 30, 'DHEERAJ', 64000);
insert into employee values(104, 20, 'ESHAAN', 54000);
insert into employee values(105, 40, 'FALGUN', 34000);
insert into employee values(106, 10, 'GANPAT', 76000);
insert into employee values(107, 30, 'HIREN', 38000);
insert into employee values(108, 20, 'ISHWAR', 63000);
insert into employee values(109, 10, 'JAI', 90000);


-- Inserting items into department
insert into department values(10, "Software", "Siva");
insert into department values(20, "Accounts", "Shekhar");
insert into department values(30, "Sales", "Guna");
insert into department values(40, "Apprentice", "Venkat");


select name from employee where depid = 20; -- Displaying names of employees who work in accounts dep

select count(*) from employee where depid = 20; -- Displaying number of employees who work in accounts dep

select max(salary) from employee where depid = 20; -- Displaying maximum salary in accounts dep

select min(salary) from employee where depid = 20; -- Displaying minimum salary in accounts dep

select avg(salary) from employee where depid = 20; -- Displaying average salary in accounts dep

-- Displaying employees who work under Siva(supervisor)
select * from employee where depid = (select depid from department where supervisor = "Siva");

-- Displaying department names where only one employee works
select depname from department where depid = (select depid from employee group by depid having count(*) = 1);

-- Increasing the salary of all employees in sales by 15%
update employee set salary = (salary + 0.15*salary) where depid = (select depid from department where depname = "Sales");

-- Adding bonus column and computing it to be 5% of the salary.
alter table employee add(bonus int);
update employee set bonus = 0.05*salary;

-- Deleting employee in the Apprentice department.
delete from employee where depid = (select depid from department where depname ="Apprentice");

select * from employee;
