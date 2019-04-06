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

    int sales[3][12];
    int sum[3] = {0, 0, 0};

    for(int j = 0; j < 3; j++)
    {
        for(int i = 0; i < 12; i++)
        {
            cout << "Please input the sales for Year " << j << " and " << months[i] << ": ";
            cin >> sales[j][i];
        }
        for (int i = 0; i < 12; i++)
        {
            sum[j] += sales[j][i];
        }
        
        cout << "The total sales of this year is " << sum[j] << endl;
    }

    int total = 0;
    for (int i = 0; i < 3; i++)
    {
        total += sum[i];
    }
    
    cout << "The total sales of these 3 years is " << total << endl;

}