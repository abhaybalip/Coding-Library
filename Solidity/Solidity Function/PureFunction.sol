// Solidity - Function Pure
// Pure functions ensure that they not read or modify the state.

// SPDX-License-Identifier: SEE LICENSE IN LICENSE
pragma solidity >=0.8.0;

contract SampleConstract {
    uint internal num = 10;

    function PureFunction() public pure {
        // num += 10; // error for accessing state var
    }

    constructor() {}
}
