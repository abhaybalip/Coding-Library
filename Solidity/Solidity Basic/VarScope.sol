// Solidity - Variable Scope

// SPDX-License-Identifier: SEE LICENSE IN LICENSE
pragma solidity >=0.8.0;

contract SampleContract {
    uint private private_num;

    uint public public_num;

    uint internal internal_num;

    constructor() {}
}

/*
    Public − Public state variables can be accessed internally as well as via messages. For a public state variable,
    an automatic getter function is generated.

    Internal − Internal state variables can be accessed only internally from the current contract 
    or contract deriving from it without using this.

    Private − Private state variables can be accessed only internally from the current contract
    they are defined not in the derived contract from it.
*/
