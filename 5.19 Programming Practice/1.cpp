#include <iostream>

int main()
{
    using namespace std;
    int a, b;
    int sum = 0;
    cout << "Please input the smaller integer: ";
    cin >> a;
    cout << "The value of a is " << a << endl;
    cout << "Please input the larger integer: ";
    cin >> b;
    cout << "The value of b is " << b << endl;
    
    /*
    int i = a;
    do {
        sum += i;
        ++i;
    } while (i <= b);
    */
   
    for (; a <= b; a++)
    {
        sum += a;
    }

    cout << "The sum of integers between a and b is " << sum << endl;
}