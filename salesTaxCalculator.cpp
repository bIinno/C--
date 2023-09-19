#include <iostream>
using namespace std;

int main()
{
    const double stateTax = 0.04;
    const double countyTax = 0.02;

    double grossSales;
    cout << "Enter the total sales for the month: $";
    cin >> grossSales;


    double stateTaxAmount = grossSales * stateTax;
    double countyTaxAmount = grossSales * countyTax;
    double totalTaxAmount = stateTaxAmount + countyTaxAmount;

    cout << "State Tax: $" << stateTaxAmount << endl;
    cout << "County Tax: $" << countyTaxAmount << endl;
    cout << "Total Sales Tax: $" << totalTaxAmount << endl;

    cout << "After taxes, your netSales is: $" << grossSales - totalTaxAmount << endl;

    system("pause");
    return 0;
}
