#include <iostream>

int main()
{
  using namespace std;
  double daphne = 100;
  const double daphne_interest = daphne * 0.1;
  double cleo = 100;
  

  int year = 0;

  for(; cleo <= daphne; ++year)
  {
    double cleo_interest = cleo * 0.05;
    daphne += daphne_interest;
    cleo += cleo_interest;
  }

  cout << "Now is year: " << year << endl;
  cout << "Daphne has $" << daphne << endl;
  cout << "Cleo has $" << cleo << endl;
}