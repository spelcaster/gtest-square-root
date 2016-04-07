#include "../include/SquareRoot.hpp"

#include <cmath>

SquareRoot::SquareRoot () {
    number_ = 0.0;
}

SquareRoot::~SquareRoot () {
}

void SquareRoot::setNumber (const double number) {
    number_ = number;
}

double SquareRoot::getNumber () {
    return number_;
}

double SquareRoot::calculate () {
    if (number_ < 0.0) {
        return -1;
    }

    return std::sqrt(number_);
}
