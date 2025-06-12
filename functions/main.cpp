#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

  /*
  double num{};
  cout << "Enter a number (double): " << endl;
  cin >> num;
  cout << "The sqrt of " << num << " is : " << sqrt(num) << endl;
  cout << "The cubed root of " << num << " is : " << cbrt(num) << endl;
  cout << "The sin of " << num << " is : " << sin(num) << endl;
  cout << "The cosine of " << num << " is : " << cos(num) << endl;
  cout << "The ceil of " << num << " is : " << ceil(num) << endl;
  cout << "The floor of " << num << " is : " << floor(num) << endl;

  double power{};
  cout << "\n Enter a power to raise: " << num << " to ";
  cin >> power;
  cout << num << " Raised to  the " << power << " Power is : " << pow(num,power) << endl;
  */

  int random_number{};
  size_t count{10};
  int min{1};
  int max {6};

  cout << "Rand_max on my system is: " << RAND_MAX << endl;
  srand(time(nullptr));

  for(size_t i{1};i<=count;++i)
    random_number = rand() % max + min;
    cout << random_number << endl;


  cout << endl;
  return 0;
}
