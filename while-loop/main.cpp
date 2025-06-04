#include <iostream>
using namespace std;

int main(){
  /*
  int i{1};
  int scores[] {100,90,88};
  while(i<=5){
    cout << "H0" << endl;
    ++i;
  }
  while (i<=10){
    if(i%2 ==0) 
      cout << i << endl;
    ++i;
  }
  while(i<3){
    cout << scores[i] << endl;
    ++i;
  }
  int number{};
  cout << "Enter an integer less than 100: ";
  cin >> number;
  while(number >= 100) {
    cout << "Enter an integer less than 100: ";
    cin >> number;
  }
  cout << "Thanks " << endl;
  int number {} ;
  cout << "Enter an integer between 1 and 5: ";
  cin >> number;
  while(number <= 1 || number >= 5)
    cout << "Enter an in integer between 1 and 5: ";
    cin >> number;
  cout << "Thanks " << endl;
  bool done{false};
  int number {0};
  while(!done){
    cout << "Enter an integer between 1 and 5 : ";
    cin >> number;
    if(number <= 1 || number >= 5)
      cout << "Out of range , try again" << endl;
    else 
      cout << "Thanks! " << endl;
      done = true;
  }
  int num{};
  cout << "Enter  a positive integer - start the countdown: ";
  cin >> num;
  while(num>0){

    cout << num << endl;
    --num;
  }
  cout << "Blast off" << endl;
  int num{};
  cout << "Enter a positive integer to cout up to: ";
  cin >> num;
  int i{1};
  while(num>=i){
    cout << i << endl;
    i++;
  }
  */
  int number{};
  cout << "Enter an integer less than 100: ";
  cin >> number;

  while(number >= 100){
    cout << "Enter an integer less than 100: ";
    cin >> number;
  }
cout << "Thanks " << endl;
  cout << endl;
  return 0;
}
