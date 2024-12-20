// Solidity - OOP Abstraction

// SPDX-License-Identifier: SEE LICENSE IN LICENSE
pragma solidity >=0.8.0;

abstract contract AbstractContract {
    constructor() {}

    function test() public {}
}

contract SampleContract is AbstractContract {
    constructor() {
        test();
    }
}
