// Solidity - Function Modifier

// SPDX-License-Identifier: SEE LICENSE IN LICENSE
pragma solidity >=0.8.0;

// import "hardhat/console.sol";

contract SampleContract {
    bool condition = false;
    modifier FunctionModifier() {
        require(condition, "condition is not true");
        _;
        // modifier ends with _
    }

    function ModifierUser() public FunctionModifier {}

    constructor() {}
}
