#include <iostream>
#include <string>
int main()
{
    using namespace std;
    const int len = 20;
    char fst_name[len];
    char lst_name[len];
    char grade;
    int age;

    cout << "What is your first name? ";
    cin.getline(fst_name, len);


    cout << "What is your last name? ";
    cin.getline(lst_name, len);


    cout << "What letter grade do you deserve? ";
    cin >> grade;


    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << lst_name << ", " << fst_name << endl;
    cout << "Grade: " << (char) (grade + 1) << endl;
    cout << "Age: " << age << endl;
}