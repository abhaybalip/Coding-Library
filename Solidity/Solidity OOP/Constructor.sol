// Solidity - Contract Constructor

// SPDX-License-Identifier: SEE LICENSE IN LICENSE
pragma solidity >=0.8.0;

contract SampleContract {
    uint a;
    string b;

    constructor(uint _a, string memory _b) {
        a = _a;
        b = _b;
    }
}
