// TS - Function 


function getTime(): number {
    return new Date().getTime()
}


function multiply(a: number, b: number) {
    return a * b
}

console.log(getTime())

console.log(multiply(10, 20))
