# CS333-Project-1
Ben Raivel
09/23/2021

## File structure and compilation environment

.
├── README.md
├── task1.c
├── task2.c
├── task3.c
├── task4.c
└── task5.c

0 directories, 6 files

Configured with: --prefix=/Library/Developer/CommandLineTools/usr --with-gxx-include-dir=/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/4.2.1
Apple clang version 12.0.0 (clang-1200.0.32.2)

## Task 1: Memory access
Program Behavior:

    compile with:
        gcc -o task1 task1.c

    run with:
        ./task1
    
    expected output:
        Elements of donkeykong:
        Byte 0 : 61

        Elements of diddykong:
        Byte 0 : 0A
        Byte 1 : 00

        Elements of dixiekong:
        Byte 0 : D2
        Byte 1 : 04
        Byte 2 : 00
        Byte 3 : 00

        Elements of funkykong:
        Byte 0 : 1C
        Byte 1 : FF
        Byte 2 : FF
        Byte 3 : FF
        Byte 4 : FF
        Byte 5 : FF
        Byte 6 : FF
        Byte 7 : FF

        Elements of crankykong:
        Byte 0 : 22
        Byte 1 : FD
        Byte 2 : EB
        Byte 3 : 40

        Elements of lankykong:
        Byte 0 : 38
        Byte 1 : 84
        Byte 2 : 2A
        Byte 3 : 35
        Byte 4 : 7B
        Byte 5 : A0
        Byte 6 : 35
        Byte 7 : 3F

Task Questions:
    Is the machine you are using a big-endian or little-endian machine?
        the machine is little endian (least significant bit stored first)
    How does the program output tell you?
        diddykong and dixiekong, both relativley small integers, do not fill the latter half of their bytes (byte 1 and bytes 2&3 respectivley)

## Task 2: Read out unallocated memory
Program Behavior:

    compile with:
        gcc -o task2 task2.c

    run with:
        ./task2
    
    expected output:
        0: 98
        1: 99
        2: 03
        3: E5
        4: FE
        5: 7F
        6: 00
        7: 00
        8: 00
        9: 00
        10: 00
        .
        .
        .
        skipping some lines...
        .
        .
        .
        1636: 00
        1637: 00
        1638: 00
        1639: 00
        zsh: segmentation fault  ./task2

Task Questions:
    What happens at the end of the process?
        a segmentation fault
    Can you find the variables defined in your C program?
        no

## Task 3: Repeatedly allocate memory (with and without free())
Program Behavior:

    compile with:
        gcc -o task3 task3.c

    run with:
        ./task3
    
    expected output:
        enter '1' to enable free() otherwise enter a different char:
        1

Task Question:
    describe the memory requirements when using and not using the free statement
        with the free() statement the program uses only 312KB of memory, without it it will quickly use hundreds of MB

## Task 4: Examine struct memory
Program Behavior:

    compile with:
        gcc -o task4 task4.c

    run with:
        ./task4

    expected output:
        sizeof struct: 8
        0: 61
        1: 00
        2: 00
        3: 00
        4: 08
        5: 00
        6: 7A
        7: 00
        8: A8
        9: 99

Task Questions:       
    Does the sizeof result match your expectation?
        no, it is always an even number of bytes, never odd
    Are there any gaps in the way the fields of the structure are laid out?
        any field with an odd number of bytes gets padded with an empty byte

## Task 5: testing strcpy
Program Behavior:

    compile with:
        gcc -o task5 task5.c

    run with:
        ./task5

    expected output:
        zsh: illegal hardware instruction  ./task5

Observation:
    it is robust in the c compiler, the program will not run