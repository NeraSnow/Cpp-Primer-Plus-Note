#include <iostream>

const int Max = 10;
int main()
{
    using namespace std;
    double donation[Max];
    cout << "Please input donation values: \n"
         << "The program will terminate once a non-numeric value is consumed." << endl;
    cout << "Donation #1: ";
    int i = 0;
    while (i < Max && cin >> donation[i]) {
        if (++i < Max)
        cout << "Donation #" << i+1 << ": ";
    }

    double total = 0.0;
    for (int j = 0; j < i; j++)
        total += donation[j];
    
    double average = total / i;

    if (i == 0)
        cout << "No donation\n";
    else 
        cout << average << " = average donation of " << i << " donations.\n";
    
    int num_greater_average = 0;
    for (int k = 0; k < i; k++) {
        if (donation[k] > average)
            ++num_greater_average;
    }

    cout << num_greater_average << " donation(s) is/are greater than average.\n";


        
}