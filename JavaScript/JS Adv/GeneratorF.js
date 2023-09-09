// js - Generator Function

let array = [0,1,2,3,4,5]

// generator function
function* gen(arr){
    for(i in arr){
        yield arr[i]
    }
}

let itr = gen(array)
console.log(itr)

console.log(itr.next())
console.log(itr.next())
console.log(itr.next())