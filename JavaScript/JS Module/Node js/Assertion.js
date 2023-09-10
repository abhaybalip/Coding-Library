// Node js - assert
const assert = require('assert')

// Normal assertion
try {
    assert(false, 'error message')
    console.log('error not occured')
} catch (error) {
    console.log('error occured: ' + error + '\n\n')
}

// Equalibrium assertion
num1 = num2 = 10
num1 += 10
try {
    assert.deepEqual(num1, num2, 'values not equal')
} catch (error) {
    console.log('error occured: ' + error + '\n\n')
}

// string regex
try {
    assert.match('this is main string',/.*/) // .* -> all character
    console.log('string matched')
} catch (error) {
    console.log('error occured: ' + error + '\n\n')
}

// Assertion function that does not throw error
try {
    assert.doesNotThrow(function () {
        // throw new Error('this methode doesnt throws error')
    })
} catch (error) {
    console.log('error occured: ' + error + '\n\n')
}

// ifError - throw value for null values
// 0 or new Error()
try {
    assert.ifError(new Error());
    console.log('No Error Occurred')
} catch (error) {
    console.log('error occured: ', error + '\n\n')
}