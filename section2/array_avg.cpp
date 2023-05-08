//
// Created by Rodrigo Alves Costa on 5/7/23.
//

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<double> numbers;
    string numberString;
    cout << "This calculates the average of a list of numbers." << endl;
    cout << "Enter a list of numbers separated by spaces: ";
    getline(cin, numberString);
    for(int i = 0; i < numberString.length(); i++) {
        if (numberString[i] == ' ') {
            numbers.push_back(stod(numberString.substr(0, i)));
            numberString = numberString.substr(i + 1, numberString.length());
            i = 0;
        }
    }
    numbers.push_back(stod(numberString.substr(0, numberString.length())));
    cout << endl << "The average of the numbers you entered is: "
        <<  accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size() << endl;
    return 0;
}
