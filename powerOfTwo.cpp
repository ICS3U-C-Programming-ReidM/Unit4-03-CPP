// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: March 2025
// This program calculates the squares of all
// whole numbers from 0 to the user input

// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: March 2025
// This program calculates the squares of all whole
// numbers from 0 to the user input.

#include <iostream>
#include <string>

int main() {
    std::string user_num;
    int number;

    while (true) {
        std::cout << "Enter a whole number: ";
        std::getline(std::cin, user_num);

        try {
            number = std::stoi(user_num);  // Try to convert to int

            if (number >= 0) {
                // Valid positive whole number, show squares
                for (int i = 0; i <= number; i++) {
                    std::cout << i << "*2 = " << (i * i) << std::endl;
                }
                break;
            } else {
                std::cout << number << " is not positive." << std::endl;
            }
        } catch (...) {
            std::cout << user_num << " is not an integer." << std::endl;
        }
    }

    return 0;
}
