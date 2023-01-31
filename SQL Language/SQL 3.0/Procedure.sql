-- sql - procedure
CREATE DATABASE Test_db;
use Test_db;
CREATE TABLE Test(
    id int,
    user char(10)
);
INSERT INTO Test VALUES(1,'u1');
INSERT INTO Test VALUES(2,'u2');
INSERT INTO Test VALUES(3,'u3');

-- create procedure

-- call procedure

-- parametrised procedure
CREATE procedure Insert_user(in pid int,in puser char(10))
begin
insert into Test VALUES(pid,puser);
end;

call Insert_user(10,'u10');