#include <iostream>
#include <string>

struct CandyBar
{
    std::string brand;
    float weight;
    int cals;
};

int main()
{
    using namespace std;
    CandyBar snacks[3] = {
        {"Mocha Munch", 2.3, 250},
        {"Something", 4.5, 253},
        {"Something Healthy", 2.5, 952}
    };

    for (int i = 0; i < 3; i++)
    {
    cout << "Brand of the candy: " << snacks[i].brand << endl;
    cout << "Weight of the candy: " << snacks[i].weight << endl;
    cout << "Calories of the candy: " << snacks[i].cals << endl;
    cout << endl;
    }
}

