// Solidity - Data Structure

// SPDX-License-Identifier: SEE LICENSE IN LICENSE
pragma solidity >=0.8.0;

contract SampleContract {
    // Array
    uint[] array = [0, 1, 2, 3, 4, 5];
    uint[3] arr;

    // Map - mapping(keyType => ValueType)
    mapping(uint => string) name;

    // Structure - struct
    struct person {
        uint age;
        string name;
    }
    person p = person(10, "");

    constructor() {
        name[10] = "";
    }
}
