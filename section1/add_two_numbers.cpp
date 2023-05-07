//
// Created by Rodrigo Alves Costa on 5/7/23.
//

#include <iostream>

int main()
{
//    std::cout << "This program adds two numbers. " << std::endl << "Enter the first number: ";
//    int firstNumber;
//    std::cin >> firstNumber;
//    std::cout << std::endl << "Enter the second number: ";
//    int secondNumber;
//    std::cin >> secondNumber;
//    std::cout << std::endl << "The sum of " << firstNumber << " and " << secondNumber << " is " << firstNumber + secondNumber << std::endl;
    std::cout << "This program adds two numbers. " << std::endl << "Enter the two numbers separated with a space: ";
    int firstNumber, secondNumber;
    std::cin >> firstNumber >> secondNumber;
    std::cout << std::endl << "The sum of " << firstNumber << " and " << secondNumber << " is " << firstNumber + secondNumber << std::endl;
    return 0;
}
