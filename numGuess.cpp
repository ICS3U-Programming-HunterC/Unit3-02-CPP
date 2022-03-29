// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: March 29, 2022
// This is a program for a user to guess the correct number

#include <iostream>

int main() {
    // declare constants and variables
    const float CORRECT_NUMBER = 1;
    float guess;


    // input
    std::cout << "Enter a number between 1 and 9: ";
    std::cin >> guess;
    std::cout << "" << std::endl;

    // process
    if (guess != CORRECT_NUMBER) {
        // display incorrect
        std::cout << "That is wrong!";
    }

    if (guess == CORRECT_NUMBER) {
        // display correct
        std::cout << "That is correct!";
    }
}
