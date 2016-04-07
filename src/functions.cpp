#include "../include/functions.hpp"

#include <iostream>
#include <cmath>

double square_root (const double number) {
    if (number < 0.0)
        return -1;

    return std::sqrt(number);
}

void die (const int code) {
    if (code)
        std::cerr << "Error";

    exit(code);
}

