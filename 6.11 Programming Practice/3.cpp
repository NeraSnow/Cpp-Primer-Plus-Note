#include <iostream>

using namespace std;

void showmenu()
{
    cout << "Please enter one of the following choices:\n"
         << "c) carnivore\t" << "p) pianist\n"
         << "t) tree\t" << "g) game\n" 
         << "Type q to quit" << endl;
}

int main()
{
    char choice;
    showmenu();
    cin >> choice;
    while (choice != 'q')
    {
        switch(choice)
        {
            case 'c': cout << "A bear is a carnivore." << endl;
                    break;
            case 'p': cout << "Stanley Babin is a pianist." << endl;
                    break;
            case 't': cout << "A maple is a tree." << endl;
                    break;
            case 'g': cout << "Battlefield V is a game" << endl;
                    break;
            default: cout << "That's not a choice" << endl;
        }
        showmenu();
        cin >> choice;
    }
    cout << "Bye!\n";
    return 0;
}