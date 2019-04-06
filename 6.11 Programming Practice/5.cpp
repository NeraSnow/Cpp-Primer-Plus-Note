#include <iostream>

int main()
{
    double income;
    double tax;
    using namespace std;
    cout << "Please input your income: ";
    while (cin >> income && income >= 0)
    {
        if (income <= 5000) 
            tax = 0;
        else if (income <= 15000)
            tax =  0.1 * (income - 5000);
        else if (income <= 35000)
            tax = 10000 * 0.1 + (income - 15000) * 0.15;
        else 
            tax = 10000 * 0.1 + 20000 * 0.15 + (income - 35000) * 0.2;
        
        cout << "Your personal income tax is: " << tax << endl;
        cout << "Please input your income: ";
    }
    cout << "Bye!\n";
    return 0;

}