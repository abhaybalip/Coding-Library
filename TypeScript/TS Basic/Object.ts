// TS - Object 

let d1 = {
    num: 99,
    str: 'X',
    bool: true
}

let d2: { num: number, str: string, bool: boolean } = {
    num: 10,
    str: 'A',
    bool: true
}

console.log(d1, d2.bool)

// Error code - 

// let d3: {num:number,str: string} = {
//     num: 91
// }

const nameAgeMap: { [index: string]: number } = {}

nameAgeMap.a = 25
nameAgeMap.b = 20

console.log(nameAgeMap)

