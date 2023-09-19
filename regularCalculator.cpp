#include <iostream>
using namespace std;

int main() {
    cout << "Enter your equation (e.g., num1 + num2): ";
    double num1, num2, result;
    char action;

    cin >> num1 >> action >> num2;

    if (action == '+') {
        result = num1 + num2;
    } else if (action == '-') {
        result = num1 - num2;
    } else if (action == '*') {
        result = num1 * num2;
    } else if (action == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            cout << "Error: Division by zero." << endl;
            return 1;
        }
    } else {
        cout << "Error: Invalid operator." << endl;
        return 1;
    }

    cout << num1 << " " << action << " " << num2 << " = " << result << endl;

    system("pause");
    return 0;
}
