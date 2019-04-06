#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string fst_name;
    string lst_name;
    cout << "Enter your first name: ";
    getline(cin, fst_name);
    cout << "Enter your last name: ";
    getline(cin, lst_name);
    string full_name = lst_name + ", " + fst_name;
    cout << "Here's the information in a single string: " << full_name << endl;
}