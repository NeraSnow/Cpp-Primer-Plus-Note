#include <iostream>
#include <string>

struct pizza 
{
    std::string company_name;
    float diameter;
    float weight;
};

int main()
{
    using namespace std;
    struct pizza mypizza;
    cout << "Please enter the name of the pizza company: ";
    getline(cin, mypizza.company_name);
    cout << "Please enter the diameter of the pizza: ";
    cin >> mypizza.diameter;
    cout << "Please enter the weight of the pizza: ";
    cin >> mypizza.weight;

    cout << "Name of the pizza company: " << mypizza.company_name << endl;
    cout << "Diameter of the pizza: " << mypizza.diameter << endl;
    cout << "Weight of the pizza: " << mypizza.weight << endl;
}
