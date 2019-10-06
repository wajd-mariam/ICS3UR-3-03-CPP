// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on:October 2019
// This is a number guessing program
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int number;
    int random;
    srand(time(0));  // seed random number generator
    random = rand() % 10 + 1;

    // input
    std::cout << "Can you guess the number the computer chose from 0 to 10? ";
    std::cin >> number;

    // process
    if (number == random) {
        // output
        std::cout << "You guessed it :)";
    } else {
        std::cout << "You couldn't guess it :(";
    }
}
