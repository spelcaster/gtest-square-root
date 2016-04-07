#include "../include/functions.hpp"
#include "../include/SquareRoot.hpp"

#include <iostream>

int main (int argc, char **argv) {
    std::cout << square_root(-9.0) << std::endl;
    std::cout << square_root(0.0) << std::endl;
    std::cout << square_root(9.0) << std::endl;

    SquareRoot root;
    root.setNumber(-9.0);
    std::cout << root.calculate() << std::endl;
    root.setNumber(0.0);
    std::cout << root.calculate() << std::endl;
    root.setNumber(9.0);
    std::cout << root.calculate() << std::endl;

    return 0;
}
