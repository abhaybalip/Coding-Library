// Solidity - Library
/* 
    Libraries are similar to Contracts but are mainly intended for reuse.
    A Library contains functions which other contracts can call.
 */

// SPDX-License-Identifier: SEE LICENSE IN LICENSE
pragma solidity >=0.8.0;

// Internal Library
library Math {
    function add(uint256 a, uint256 b) internal pure returns (uint256) {
        return a + b;
    }

    function subtract(uint256 a, uint256 b) internal pure returns (uint256) {
        require(b <= a, "Subtraction overflow");
        return a - b;
    }
}

// Contract using the Internal Library
contract MyContract {
    using Math for uint256;

    function calculate(uint256 x, uint256 y) public pure returns (uint256) {
        uint256 sum = x.add(y);
        uint256 difference = x.subtract(y);
        return sum + difference;
    }
}
