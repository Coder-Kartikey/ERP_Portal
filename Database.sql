create database payment;
use payment;
create table payment(
	payment_id int primary key,
    costumer varchar(25),
    mode varchar(25)
);
insert into payment
values (101,"kp","netbanking"),(102,"kp","creadit card"),
    (103,"kp","creadit card"),
    (104,"kp","netbanking"),
    (105,"kp","creadit card"),
    (106,"kp","creadit card"),
    (107,"kp","creadit card"),
    (108,"kp","netbanking"),
    (109,"kp","netbanking"),
    (110,"kp","creadit card");
drop table payment;
select mode, count(payment_id) from payment
group by mode;
drop database payment;
use sakila;
select * from actor;