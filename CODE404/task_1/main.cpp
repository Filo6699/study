#include <bits/stdc++.h>

using namespace std;

const string RESET_COLOR = "\033[0m";
const string BLUE_COLOR = "\033[34m";
const string GRAY_COLOR = "\033[38;5;243m";
const string YELLOW_COLOR = "\033[38;5;11m";

int main() {
    cout << BLUE_COLOR;
    cout << "\nCalculator" << "\n\n";
    cout << RESET_COLOR;
    cout << "Enter two numbers to see their sum, difference, product and quotient" << "\n\n";

    double x, y;
    cout << GRAY_COLOR;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    cout << YELLOW_COLOR;
    cout << "\n";
    cout << "x + y = " << x + y << "\n";
    cout << "x - y = " << x - y << "\n";
    cout << "x * y = " << x * y << "\n";
    if (y == 0) {
        cout << "Division by zero is not possbile\n";
    } else {
        cout << "x / y = " << x / y << "\n\n";
    }
    cout << RESET_COLOR;
}
