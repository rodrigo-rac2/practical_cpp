//
// Created by Rodrigo Alves Costa on 5/7/23.
//

#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    std::vector<double> numbers;
    std::string numberString;
    std::cout << "This calculates the average of a list of numbers." << std::endl;
    std::cout << "Enter a list of numbers separated by spaces: ";
    std::getline(std::cin, numberString);
    for(int i = 0; i < numberString.length(); i++) {
        if (numberString[i] == ' ') {
            numbers.push_back(std::stod(numberString.substr(0, i)));
            numberString = numberString.substr(i + 1, numberString.length());
            i = 0;
        }
    }
    numbers.push_back(std::stod(numberString.substr(0, numberString.length())));
    std::cout << std::endl << "The average of the numbers you entered is: "
        <<  std::accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size() << std::endl;
    return 0;
}
