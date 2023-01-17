/*
Create a bank transaction File.

1. create table with the following fields
   Field Name  Type
   accnum      int
   cusname     varchar(10)
   acctype     varchar(2)
   balance     int
   tradate     date
   traamount   int
   tratype     varchar(1)

2. Add records into the table for 10 customers.

3. Find the names of all customers whose balance is more than 100000.

4. Find the number of customers whose balance is less than minimun(1000).

5. Transaction: update the records using transction type which is d and w.

6. Display transaction on a particular day using where and select.

7. Display all the records of account.

Author : @ChaitanyaJoshiX
*/

create database banktra;
use banktra;

create table bank
(
  accnum int,
  cusname varchar(10),
  acctype varchar(2),
  balance int,
  tradate date,
  traamount int,
  tratype varchar(1)
);

insert into bank values(100,'ADVAIT', 'SB', 120000, '2022-03-15', 6000, 'W' );
insert into bank values(101,'BINOD', 'SB', 86000, '2022-04-04', 8000, 'W' );
insert into bank values(102,'CHANDAN', 'SB', 65000, '2022-09-09', 15000, 'D' );
insert into bank values(103,'DHEERAJ', 'CB', 86000, '2022-03-14', 4000, 'W');
insert into bank values(104,'ESHAAN', 'SB', 110500, '2022-12-02', 20000, 'D');
insert into bank values(105,'FALGUN', 'CB', 46000, '2022-05-15', 6000, 'W');
insert into bank values(106,'GANPAT', 'CB', 150000, '2022-01-01', 50000, 'D');
insert into bank values(107,'HIREN', 'CB', 60000, '2022-07-19', 18000, 'W');
insert into bank values(108,'INDRAJEET', 'SB', 65000, '2022-10-24', 5000, 'D' );
insert into bank values(109,'JAI',19, 'CB', 50000, '2022-06-21', 9000, 'W');

select * from bank where balance>100000;

select count(*) from bank where balance<1000;


update bank set balance = (balance+traamount) where tratype='D';

update bank set balance = (balance-traamount) where tratype='W';

select * from bank where tradate ='2022-03-15';


select * from bank where acctype = 'SB';
