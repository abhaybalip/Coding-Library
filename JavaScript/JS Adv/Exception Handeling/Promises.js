// js - Promises

const print = (data) => console.log(data),
    fs = require('fs')

// Create new promise
// pass function arg resolve & reject 

promise = new Promise(function (resolve, reject) {
    fs.readFile(__dirname + '/public/index.html', {
        encoding: 'utf-8',
    }, function (err, data) {
        if (err) {
            print('error: ' + err)
            reject('file opening error')
        }
        else print('data: ' + data)
        resolve('file opened')
    })
})
// after completion promise call then methode
// pass 2 function for either resolved or rejected
.then(function (value) {
    print('promise ful filled : \n' + value)
}, function (reason) {
    print('promise not ful filled : \n' + reason)
})
// catch block is called when error occures
.catch(function (reason) {
    print('error occured')
    print('reason of not ful filling promise : \n' + reason)
})