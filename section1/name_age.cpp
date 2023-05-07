//
// Created by Rodrigo Alves Costa on 5/7/23.
//

#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);
    std::cout << std::endl << "Now enter your age: ";
    int age;
    std::cin >> age;
    std::cout << std::endl << "You are " << name << " and your age is " << age << std::endl;
    return 0;
}
