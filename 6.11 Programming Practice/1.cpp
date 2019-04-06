#include <iostream>
#include <cctype>

int main()
{
    using namespace std;

    char ch;

    cout << "Please type in words, this program will convert\n" 
         << "upper case into lower case and vice versa." << endl;
    cout << "(Type '@' to exit)" << endl;
    
    cin.get(ch);
 //   cout << "This char: " << ch << endl;
    while (ch != '@')
    {
    //    cout << "Here!" << endl;
        if (isupper(ch))
            ch = tolower(ch);
        else if (islower(ch))
            ch = toupper(ch);
        else
            ;
        
    //    cout << "Now we have " << ch << endl;
        if (!isdigit(ch))
            cout << ch;
        
        cin.get(ch);
    }


    return 0;
}