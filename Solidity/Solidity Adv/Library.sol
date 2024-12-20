// Solidity - Library

// SPDX-License-Identifier: MIT
pragma solidity ^0.8.17;

library Math {
    function add(uint256 a, uint256 b) internal pure returns (uint256) {
        return a + b;
    }

    function subtract(uint256 a, uint256 b) internal pure returns (uint256) {
        require(b <= a, "SafeMath: subtraction overflow");
        return a - b;
    }

    function multiply(uint256 a, uint256 b) internal pure returns (uint256) {
        if (a == 0) {
            return 0;
        }
        uint256 c = a * b;
        require(c / a == b, "SafeMath: multiplication overflow");
        return c;
    }

    function divide(uint256 a, uint256 b) internal pure returns (uint256) {
        require(b > 0, "SafeMath: division by zero");
        return a / b;
    }
}

contract MyContract {
    using Math for uint256;

    function calculate(uint256 x, uint256 y) public pure returns (uint256) {
        uint256 sum = x.add(y);
        uint256 difference = x.subtract(y);
        uint256 product = x.multiply(y);
        uint256 quotient = x.divide(y);

        return sum + difference + product + quotient;
    }
}
