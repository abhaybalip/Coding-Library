// Solidity - Data Type

// SPDX-License-Identifier: SEE LICENSE IN LICENSE
pragma solidity >=0.8.0;

contract SampleContract {
    // Boolean - bool
    bool b = true;

    // Integer - integer/unsigned int
    int i1 = 10;
    uint i2 = 20;

    // Integer - bit specified int
    uint8 i8 = 80;
    uint256 i256 = 256;

    fixed n = 100;

    // string
    string s = "";

    // Bytes - byte/ byte32y
    bytes bt = "byte data";
    bytes32 bt32 = "32 byte data";

    // Address
    address adr;

    constructor() {}
}
