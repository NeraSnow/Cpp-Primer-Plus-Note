#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char fst_name[20];
    char lst_name[20];
    cout << "Enter your first name: ";
    cin.getline(fst_name, 20);
    cout << "Enter your last name: ";
    cin.getline(lst_name, 20);
    int fst_name_len = strlen(fst_name);
    int lst_name_len = strlen(lst_name);
    char * full_name = new char[fst_name_len+lst_name_len+2];
    strcpy(full_name, lst_name);
    strcat(full_name, ", ");
    strcat(full_name, fst_name);
    cout << "Here's the information in the single string: " << full_name << endl;
    delete [] full_name;
}