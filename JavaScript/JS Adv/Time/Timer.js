// Node js - Timer

// Set timer functions :

// setImmediate(): It is used to execute setImmediate.
// setInterval(): It is used to define a time interval.
// setTimeout(): ()- It is used to execute a one-time callback after delay milliseconds.

// Clear timer functions :

// clearImmediate(immediateObject): It is used to stop an immediateObject, as created by setImmediate
// clearInterval(intervalObject): It is used to stop an intervalObject, as created by setInterval
// clearTimeout(timeoutObject): It prevents a timeoutObject, as created by setTimeout

function print(msg){
    console.log(msg)
}

const t1 = setImmediate(function(){
    print('Immediate timed function running !')
})

const t2 = setTimeout(() => {
    print('Timeout timed function running !')
},1000);

let count = 0;
const t3 = setInterval(function() {
    print('interval timed function running ! ' + count);
    count += 1;
    if (count > 5) {
        clearInterval(t3);
        print('Running stopped at count - '+count)
    }
}, 1000);