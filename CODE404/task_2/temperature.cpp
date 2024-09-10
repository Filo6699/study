#include <bits/stdc++.h>

using namespace std;

const string RESET_COLOR = "\033[0m";
const string BLUE_COLOR = "\033[34m";
const string GRAY_COLOR = "\033[38;5;243m";
const string YELLOW_COLOR = "\033[38;5;11m";

int main() {
    cout << BLUE_COLOR;
    cout << "\nTemperature Converter\n\n";
    cout << RESET_COLOR;

    cout << "This converter is 1-way, it converts Celsius to Fahrenheit\n\n";
    cout << GRAY_COLOR << "Enter temperature in Celsius: ";
    cout << RESET_COLOR;
    double celsius;
    cin >> celsius;

    double fahrenheit = (celsius * 1.8) + 32;

    cout << GRAY_COLOR;
    cout << "\nF = C * 9/5 + 32\n";
    cout << "F = " << celsius << " * 1.8 + 32\n";
    cout << "F = " << fahrenheit << "\n";
    cout << RESET_COLOR;

    cout << "Temperature in Fahrenheit: ";
    cout << YELLOW_COLOR << fahrenheit << "\n";
    cout << RESET_COLOR;
}
