// Solidity - Function Fallback
/*
In Solidity, a fallback function is a special function that acts as a catch-all
mechanism for handling unexpected or unspecified interactions with a contract.
*/

// SPDX-License-Identifier: SEE LICENSE IN LICENSE
pragma solidity >=0.8.0;

contract SampleConstract {
    constructor() {}

    fallback() external payable {}
}
