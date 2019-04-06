#include <iostream>

int main()
{
  using namespace std;
  int sum = 0;
  float num = 0;
  
  do
  {
  cout << "Please input a number: ";
  cin >> num;
  sum += num;
  cout << "The sum so far: " << sum << endl;
  } while (num != 0);
  
}