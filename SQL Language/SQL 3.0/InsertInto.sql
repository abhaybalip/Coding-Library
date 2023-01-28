-- Sql - Insert Into
CREATE TABLE Test(
    id int,
    user char(10),
    lev int
);
CREATE TABLE Test_Backup(
    id INT,
    user char(10),
    lev int
);
INSERT INTO Test VALUES(10,"user 1",0);
INSERT INTO Test VALUES(20,"user 2",1);
INSERT INTO Test VALUES(30,"user 3",1);

INSERT INTO Test_backup SELECT * FROM Test;
SELECT * FROM test_backup;

INSERT INTO Test_backup (id,user) SELECT id,user FROM Test;
SELECT * FROM Test_backup;