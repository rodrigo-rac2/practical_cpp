//
// Created by Rodrigo Alves Costa on 5/7/23.
//

#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "Enter your full name: ";
    getline(cin, name);
    cout << endl << "Now enter your age: ";
    int age;
    cin >> age;
    cout << endl << "You are " << name << " and your age is " << age << endl;
    return 0;
}
