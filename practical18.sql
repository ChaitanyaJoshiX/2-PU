/*
Generate the electricity bill for one customer.

1. Create a table for house hold Electricity bill with the following fields.
    Field Name     Type
	RR_NO          varchar(10)
	CUS_NAME       varchar(15)
	BILLING_DATE   date
	UNITS          int

2. Insert 10 records into the table (user defined).
3. Check the structure of table and note observation.
4. Add two fields to the table.
	BILL_AMT decimal(6,2)
	DUE_DATE date
5. Compute bill amount for each customer as per given table.
	Minimum            Rs. 50 (by default add)
	First 100 units    Rs 4.50/Unit
	Greater 100 units  Rs. 5.50/Unit
6. Compute DUE_DATE as BILLING_DATE + 15 Days
7. List the bill generated.

Author : @ChaitanyaJoshiX
*/

create database electricity; -- Creating Database

use electricity;

create table elec( -- Creating Table
	RR_NO varchar(10),
    CUS_NAME varchar(15),
    BILLING_DATE date,
    UNITS int
);

-- Inserting items
insert into elec values('BLR1','AKASH','2022-03-15',100);
insert into elec values('BLR2','BINOD','2022-04-15',110);
insert into elec values('BLR3','CHANDAN','2022-03-15',120);
insert into elec values('BLR4','DHEERAJ','2022-04-15',130);
insert into elec values('BLR5','ESHAAN','2022-03-15',140);
insert into elec values('BLR6','FALGUN','2022-03-15',150);
insert into elec values('BLR7','GANPAT','2022-03-15',160);
insert into elec values('BLR8','HIREN','2022-03-15',170);
insert into elec values('BLR9','INDRA','2022-03-15',180);
insert into elec values('BLR10','JAI','2022-03-15',190);

-- Adding bill amount and due date columns
alter table elec add(BILL_AMT decimal(6,2));
alter table elec add(DUE_DATE date);

-- Updating items
update elec set BILL_AMT = 100 + UNITS*4.25 where UNITS<=100;
update elec set BILL_AMT = 100 + (100*4.25) + (UNITS-100)*5 where UNITS>100;
update elec set DUE_DATE = BILLING_DATE + 15;

-- Displaying the final table
select * from elec;
