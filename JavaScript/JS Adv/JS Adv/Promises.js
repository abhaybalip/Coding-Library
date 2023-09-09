// js - Promises

function print(params) {
    console.log(params)
}

let promise = new Promise((resolve,reject)=>{
    // run asynchronous work here
    // if work is succesful call resolve methode else reject
    print('running promise ')
})

// attch handlers

// promise resolved
promise.then(()=>{
    print('promise resolved')
}).catch(()=>{
    print('promise rejected')
})