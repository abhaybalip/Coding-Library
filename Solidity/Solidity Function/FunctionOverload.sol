// Solidity - Function Overloading

// SPDX-License-Identifier: SEE LICENSE IN LICENSE
pragma solidity >=0.8.0;

contract SampleConstract {
    function getSum(uint a, uint b) public pure returns (uint) {
        return (a + b);
    }

    function getSum(uint a, uint b, uint c) public pure returns (uint) {
        return (a + b + c);
    }

    constructor() {}
}
