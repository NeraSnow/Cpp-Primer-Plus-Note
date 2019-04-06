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
    CandyBar snack =
    {
        "Mocha Munch",
        2.3,
        350,
    };
    cout << "Brand of the candy: " << snack.brand << endl;
    cout << "Weight of the candy: " << snack.weight << endl;
    cout << "Calories of the candy: " << snack.cals << endl;
}