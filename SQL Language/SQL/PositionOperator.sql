-- MySql - Position Operator
CREATE TABLE Test(
    Id int,
    user char(10)
);
INSERT INTO Test VALUES(10,"u1");
INSERT INTO Test VALUES(20,"u2");
INSERT INTO Test VALUES(30,"u3");
INSERT INTO Test VALUES(40,"u4");
INSERT INTO Test VALUES(50,"u5");

-- In operator
SELECT * FROM Test WHERE Id In (10,20);
SELECT * FROM Test WHERE Id NOT IN(10);

-- Between Operator
SELECT * FROM Test WHERE Id BETWEEN 10 AND 30;
SELECT * FROM Test WHERE Id NOT BETWEEN 10 AND 30;

DROP TABLE Test;