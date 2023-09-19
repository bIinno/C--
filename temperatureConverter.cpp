#include <iostream>
using namespace std;

int main() {
    cout << "Enter the temperature in Fahrenheit: ";
    double fahrenheit;
    cin >> fahrenheit;

    double celsius = (fahrenheit - 32) * 5 / 9;

    cout << fahrenheit << " degrees Fahrenheit is " << celsius << " degrees Celsius." << endl;

    system("pause");
    return 0;
}