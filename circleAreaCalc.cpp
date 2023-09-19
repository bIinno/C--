#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    cout << "Enter the radius of the circle: ";
    double radius;
    cin >> radius;

    double area = M_PI * pow(radius, 2);

    cout << "The area of the circle is " << area << endl;

    system("pause");
    return 0;
}