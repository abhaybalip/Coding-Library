// Node js - Database Connectivity : MySql

var mysql = require('mysql');

var con = mysql.createConnection({
  host: "localhost",
  user: "root",
  password: "admin"
});

con.connect(function(err) {
    if (err){
        throw err
    }else{
        console.log('Connected !')
    }
});

q = 'Create DataBase Test_db;'
con.query(q)
con.commit()