// TS - Tuple 
// A tuple is a typed array with a pre-defined length and types for each index.


// define tuple
let tuple: [number, boolean, String]


// init tuple 
tuple = [10, true, 'str']

tuple.push('hi')

console.log(tuple)


// readonly property
let tuple_2: readonly [number, boolean] = [10, true]

console.log(tuple_2)
