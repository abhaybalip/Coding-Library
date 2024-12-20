// Solidity - Inheitance

// SPDX-License-Identifier: SEE LICENSE IN LICENSE
pragma solidity >=0.8.0;

// A -> B -> C
contract A {
    constructor() {}
}

// inheirts contract A
contract B is A {
    constructor() {}
}

// inheirts contract B
contract C is B {
    constructor() {}
}

// multiple inheritance B,C -> D
contract D is B, C {
    constructor() {}
}
