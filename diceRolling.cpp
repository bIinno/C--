#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
    const short minValue = 1;
    const short maxValue = 6;

    srand(time(nullptr));
    short die1 = rand() % (maxValue - minValue + 1) + minValue;
    short die2 = rand() % (maxValue - minValue + 1) + minValue;

    cout << "Die 1: " << die1 << endl;
    cout << "Die 2: " << die2 << endl;

    system("pause");
    return 0;
}