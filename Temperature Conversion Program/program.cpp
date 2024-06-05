#include <iostream>
using namespace std;

int main() {
    double temperature;
    char originalUnit;

    cout << "Enter the temperature value: ";
    cin >> temperature;

    cout << "Enter the original unit of measurement (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> originalUnit;

    double celsius, fahrenheit, kelvin;

    switch(originalUnit) {
        case 'C':
        case 'c':
            celsius = temperature;
            fahrenheit = (celsius * 9/5) + 32;
            kelvin = celsius + 273.15;
            break;
        case 'F':
        case 'f':
            fahrenheit = temperature;
            celsius = (fahrenheit - 32) * 5/9;
            kelvin = (fahrenheit + 459.67) * 5/9;
            break;
        case 'K':
        case 'k':
            kelvin = temperature;
            celsius = kelvin - 273.15;
            fahrenheit = (kelvin * 9/5) - 459.67;
            break;
        default:
            cout << "Invalid unit of measurement!";
            return 1;
    }

    cout << "Temperature in Celsius: " << celsius << endl;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    cout << "Temperature in Kelvin: " << kelvin << endl;

    return 0;
}