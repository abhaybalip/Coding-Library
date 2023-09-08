function print(params) {
    console.log(params)
}
let resolve = ()=>{
    print('resolve function called')
}
let reject = ()=>{
    print('reject function called')
}

let p = new Promise((resolve,reject)=>{
    if(true){
        print('resolve function called')
    }else{
        print('reject function called')
    }
})

p.
    then(()=>{
        print('then methode called')
    }).
    catch(()=>{
        print('catch methode called')
    })
