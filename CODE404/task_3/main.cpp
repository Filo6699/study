#include <bits/stdc++.h>

using namespace std;

const string RESET_COLOR = "\033[0m";
const string BLUE_COLOR = "\033[34m";
const string GRAY_COLOR = "\033[38;5;243m";
const string YELLOW_COLOR = "\033[38;5;11m";

int main() {
    cout << BLUE_COLOR;
    cout << "\nCircle Area\n\n";
    cout << RESET_COLOR;

    cout << "Calculate the area of a circle using its radius\n\n";
    cout << GRAY_COLOR << "Enter the radius: ";
    cout << RESET_COLOR;
    double radius;
    cin >> radius;

    double radius_squared = radius * radius;
    double est_area = M_PI * (radius_squared);

    cout << GRAY_COLOR;
    cout << "\nArea = πr²\n";
    cout << "Area = " << radius_squared << "π\n";
    cout << "Area ≈ " << est_area << "\n\n";
    cout << RESET_COLOR;

    cout << "Area of the circle: ";
    cout << YELLOW_COLOR << radius_squared << "π";
    cout << " ≈ " << est_area << "\n\n";
    cout << RESET_COLOR;
}
