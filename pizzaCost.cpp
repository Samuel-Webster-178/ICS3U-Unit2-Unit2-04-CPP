// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates price of pizza given diameter

#include <iostream>
#include <iomanip>

int main() {
    // I calculate the cost of a pizza

    const float RENT = 1;
    const float LABOUR = 0.75;
    const float COST_PER_INCH = 0.5;
    const float HST = 0.13;
    float tax;
    float diameter;
    float sub_total;
    float total;

    // Input
    std::cout << "What diameter pizza would you like? (inch): ";
    std::cin >> diameter;
    std::cout << std::endl;

    // Process
    sub_total = RENT + LABOUR + (diameter * COST_PER_INCH);
    tax = sub_total * HST;
    total = sub_total + tax;

    // Output
    std::cout << "The final cost is: $" << std::fixed
    << std::setprecision(2) << std::setfill('0') << total << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
