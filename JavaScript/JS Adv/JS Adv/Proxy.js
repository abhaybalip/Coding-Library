// js - proxy

data = {
    name: 'name',
    age: 20,
    // country: 'india'
}

handler = {
    get: function(tar,prop){
        if(prop=='name'){
            console.log('name not avaliable')
            return undefined
        }else{
            return tar[prop]
        }
    }
}

const proxy = new Proxy(data, handler)

console.log(proxy.name)
console.log(proxy.age)