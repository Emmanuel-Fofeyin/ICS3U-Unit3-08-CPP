// Copyright (c) 2022 Emmanuel Fofeyin
//
// Created by: Emmanuel Fofeyin
// Created on: Oct 2022
// This program checks if the year is a leap year

#include <iostream>
#include <string>


int main() {
    // It checks if the chosen year is a leap year or

    int yearInt;
    std::string theyearString;

    std::cout << "Please enter a year: ";
    std::cin >> theyearString;
    std::cout << std::endl;
    try {
        yearInt = std::stoi(theyearString);
        if (yearInt > 0) {
            if (yearInt % 4 == 0) {
                if (yearInt % 100 != 0) {
                    std::cout << "" << theyearString <<
                     " is a leap year." << std::endl;
                } else if (yearInt % 400 != 0) {
                    std::cout << "" << yearInt <<
                     " is not a leap year." << std::endl;
                } else {
                    std::cout << "" << theyearString <<
                     " is a leap year." << std::endl;
                }
            } else {
                std::cout << "" << theyearString <<
                 " is not a leap year." << std::endl;
            }
        } else {
            std::cout << theyearString <<
             " is not a valid year." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "" << theyearString <<
         " is not a valid input." << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
