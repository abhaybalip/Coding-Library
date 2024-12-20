// Solidity - Function View
// View functions ensure that they will not modify the state.

// SPDX-License-Identifier: SEE LICENSE IN LICENSE
pragma solidity >=0.8.0;

contract SampleConstract {
    uint num = 10;

    function ViewFunction() public view {
        uint n = num;
        n += 10;
    }

    constructor() {}
}
