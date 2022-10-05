// Copyright 2022 Cameron Diedrich
// Author: Cameron Diedrich
// This program calculates the area of a trapezoid
// with user input

#include <iostream>
#include <math.h>

int main() {
    // this function calculates area
    float trapezoidBase1;
    float trapezoidBase2;
    float trapezoidHeight;

    // input
    std::cout << "Please enter base1 of trapezoid:";
    std::cin >> trapezoidBase1;

    std::cout << "Please enter base2 of trapezoid:";
    std::cin >> trapezoidBase2;

    std::cout << "Please enter height of trapezoid:";
    std::cin >> trapezoidHeight;


    // process
    float areaOfTrapezoid =
    (trapezoidBase1 + trapezoidBase2) * trapezoidHeight / 2;

    std::cout << "Area of trapezoid is: " << areaOfTrapezoid;

    // output
    std::cout
     << areaOfTrapezoid << " mm2." << std::endl;

    std::cout << "\nDone." << std::endl;
}
