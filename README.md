# Double-base palindromes

Problem 36

The decimal number, 585 = 10010010012 (binary), is palindromic in both bases.

Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.

(Please note that the palindromic number, in either base, may not include leading zeros.)

## Setup

On Ubuntu
* `sudo apt-get install cmake`
* `sudo apt-get install clang`
* (maybe some other clang-related installs here?)

## Configure

    $ mkdir buld
    $ cd build
    $ CC=clang CXX=clang++ cmake ..

## Build and Run Tests

    $ make
    $ ./tests

## If CMakeList.txt changes

    $ cmake ..
