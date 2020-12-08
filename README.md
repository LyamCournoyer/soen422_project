# soen422_project

## Compile code
Should be a makefile but I'm not famaliar with c and need to focus on other things.

### VM on Host
`gcc -D WIN10 ./src/admin.c ./src/hal_Out.c ./src/vm.c ./src/vmstack.c  ./src/hal.c  ./src/bsl_COut.c ./src/_console.c ./src/bsl_xtoa.c -o cm`    

## Testing on host
To run the precompiled tests do:
`./test_vm.bat`


### A unit
`gcc a_unit.c -o a_unit`




## VM on Target
For all of the .bat file you will need to change the COM and avrdude command.
If uusing your own .bat file add "-D ARM7" option 

### Task 0-4 with precompiled code
`cd src && ./compile_to_target.bat`

### testBslXtoa.bat
`cd src && ./testBslXtoa.bat`


### testHalCout.bat
`cd src && testHalCout.bat`

### testVMOperandStack.bat
`cd src && testVMOperandStack.bat`

### testIOReg0.bat
`cd src && testIOReg0.bat`