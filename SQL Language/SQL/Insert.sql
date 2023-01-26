-- sql - Insert operation
create table Test(
    id int,
    user char(10),
    lev int
);

-- insert data to new row
INSERT INTO Test VALUES(1,"user 1",0);
INSERT INTO Test VALUES(2,"user 2",1);

-- insert only given data fields other will set to NULL
insert into Test(id,user) VALUES(3,"user 3");
insert into Test(user,lev) VALUES("user 7",1);

select * from Test;
drop TABLE Test;