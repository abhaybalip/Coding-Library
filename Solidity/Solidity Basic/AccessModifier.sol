// Solidity - Access Modifier
// SPDX-License-Identifier: SEE LICENSE IN LICENSE
pragma solidity >=0.8.0;

/*
external − 
External functions are meant to be called by other contracts.
They cannot be used for internal call. To call external function within contract this.function_name() call is required.
State variables cannot be marked as external.

public − 
Public functions/ Variables can be used both externally and internally.
For public state variable, Solidity automatically creates a getter function.

internal − 
Internal functions/ Variables can only be used internally or by derived contracts.

private − 
Private functions/ Variables can only be used internally and not even by derived contracts.

*/