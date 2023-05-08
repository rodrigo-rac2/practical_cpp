//
// Created by Rodrigo Alves Costa on 5/7/23.
//

#include <iostream>

using namespace std;

int main()
{
    cout << "This program adds two numbers. " << endl << "Enter the two numbers separated with a space: ";
    int firstNumber, secondNumber;
    cin >> firstNumber >> secondNumber;
    cout << std::endl << "The sum of " << firstNumber << " and " << secondNumber << " is " << firstNumber + secondNumber << endl;
    return 0;
}
