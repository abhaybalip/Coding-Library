// MongoDB - Element Operator

// Exist Opr
db.books.find({qty:{$exists: true, $nin:[ 5, 15 ]}})

// Type Opr
db.books.find({"bookid" :{$type : 2}});