//
// Created by Rodrigo Alves Costa on 5/8/23.
//

#include <iostream>

using namespace std;

double celsiusToFahrenheit(double celsius)
{
    return celsius * 9 / 5 + 32;
}

double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

string stringToLower(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

string removeSpaces(string str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}

string prepareString(string temperature) {
    for (int i = 0; i < temperature.length(); i++) {
        switch (::tolower(temperature.at(i))) {
            case ' ':
                if ((temperature.length() >= i + 8) && (stringToLower(temperature.substr(i + 1, i + 8)) == "celsius")) {
                    temperature = temperature.substr(0, i) + "C";
                }
                else if ((temperature.length() >= i + 11) && stringToLower(temperature.substr(i + 1, i + 11)) == "fahrenheit") {
                    temperature = temperature.substr(0, i) + "F";
                }
                break;
            case 'c':
                if ((temperature.length() >= i + 7) && stringToLower(temperature.substr(i, i + 7)) == "celsius") {
                    temperature = temperature.substr(0, i) + "C";
                }
                break;
            case 'f':
                if ((temperature.length() >= i + 10) && stringToLower(temperature.substr(i, i + 10)) == "fahrenheit") {
                    temperature = temperature.substr(0, i) + "F";
                }
                break;
        }
    }
    temperature = removeSpaces(temperature);
    temperature = stringToLower(temperature);
    return temperature;
}


void convertTemperature(string &temperature)
{
    for (int i = 0; i < temperature.length(); i++) {
        if (temperature.at(i) == 'c' && i == temperature.length() - 1) {
            cout << endl << "The temperature " << temperature << " is equivalent to "
                 << celsiusToFahrenheit(stod(temperature.substr(0, i))) << "F" << endl;
            break;
        } else if (temperature.at(i) == 'f' && i == temperature.length() - 1) {
            cout << endl << "The temperature " << temperature << " is equivalent to "
                 << fahrenheitToCelsius(stod(temperature.substr(0, i))) << "C" << endl;
            break;
        } else if (i == temperature.length() - 1) {
            cout << endl << "Invalid temperature scale." << endl;
        }
    }
}

int main()
{
    cout << "This program converts Celsius to Fahrenheit. " << endl;
    string input, temperature;
    do {
        cout << "---" << endl << "Enter the temperature and the scale, like 32F or 100C, or type `Exit` to quit: ";
        getline(cin, temperature);
        cout << endl << "You entered " << temperature << endl;
        temperature = prepareString(temperature);
        if (temperature != "exit") convertTemperature(temperature);
    } while (temperature != "exit");
    cout << endl << "Goodbye!";
    return 0;
}

