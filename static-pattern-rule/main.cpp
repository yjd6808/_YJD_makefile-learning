#include <iostream>

#include "add.h"
#include "sub.h"
#include "mul/mul.h"

int main() {
    std::cout << __add(1, 5) << "\n";
    std::cout << __sub(1, 5) << "\n";
    //std::cout << __mul(1, 5) << "\n";
    std::cout << "hello world!\n";
    return 0;
}
