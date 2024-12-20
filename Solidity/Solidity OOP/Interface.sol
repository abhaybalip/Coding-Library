// Solidity - OOP - Interface

// SPDX-License-Identifier: SEE LICENSE IN LICENSE
pragma solidity >=0.8.0;

interface interfaceSample {
    function test() external view;
}

contract SampleContract is interfaceSample {
    constructor() {}

    function test() external view override {}
}
