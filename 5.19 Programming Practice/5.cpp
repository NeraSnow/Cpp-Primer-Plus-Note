#include <iostream>

int main()
{
    using namespace std;
    const char * months[12] = 
    {
        "January",
        "Febuary",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    int sales[12];

    for(int i = 0; i < 12; i++)
    {
        cout << "Please input the sales for " << months[i] << ": ";
        cin >> sales[i];
    }

    int sum = 0;
    for (int i = 0; i < 12; i++)
    {
        sum += sales[i];
    }
    
    cout << "The total sales of this year is " << sum << endl;

}