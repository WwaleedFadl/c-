#include <iostream>
#include <vector>
using namespace std;

int main() {
  /*
  for (int i{1};i<=10;++i)
    cout << i << endl;

  for (int i{2};i<=10;i+=2)
    cout << i << endl;

  for (int i{10};i>0;i-=2) 
      cout << i << endl;

  for(int i{10} ; i <= 100 ; i+=10) {
    if(i % 15 == 0 )
      cout << i << endl;
  }

  for(int i{1},j{5}; i<=5;++i,++j){
    cout << i << " + " << j << " = " << i+j << endl;
  }

  for(int i {1};i<=100;++i) {
    cout << i; 
    if(i % 10 == 0 ) 
      cout << endl;
    else 
      cout << " ";
  }

  for(int i {1};i<=100;++i) {
    cout << i << ((i % 10 == 0) ? "\n" : " ");
  }

  vector <int> nums{10,20,30,40,50};
  for(unsigned i {0} ; i < nums.size();++i) {
    cout << nums[i] << endl;
  }
  */ 
  // range based for loop
  /*
  int scores [] {100,90,97};
  for (int score:scores) 
    cout << score << endl;
  cout << endl;
  double average_temp{};
  double running_sum{};
  int size{0};
  for(auto temp:{44.3,22.3}){
    running_sum += temp;
    ++size;
  }
  average_temp = running_sum / size;
  cout << average_temp << endl;
  for(auto c:"Waleed") {
    cout << c << endl;
  }
  */

  return 0;
}
