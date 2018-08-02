#include <iostream>
#include "hello.h"

// The entry point for the CPP_Basic project.
// The main function here works as a driver that executes
// code samples from the "C++ training" section of
// hackerrank.com.

int main() {
    int result = 1;

    result = hackerrank::hello();

    std::cout << "Press any key to quit....";
    std::cin.get();
    return result;
}