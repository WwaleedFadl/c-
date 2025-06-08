#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
  char first_name[20];
  char last_name[20];
  char full_name[50];
  char temp[50];
  /*
  cout << first_name;
  cout << "Please enter your name: ";
  cin >> first_name;
  cout << "Please enter your last name : ";
  cin >> last_name;
  cout << "--------------------------------------" << endl;
  cout << "Hello " << first_name << " Your first name has : " << strlen(first_name) << " Characters" << endl;
  cout << "And your last name is : " << last_name << " Your last name has : " << strlen(last_name) << " Characters "<< endl;
  strcpy(full_name,first_name);
  strcat(full_name," ");
  strcat(full_name,last_name);
  cout << "Your Full Name is " << full_name << endl;
  cout << "---------------------------------------" << endl;
  cout << "Enter your full name: ";
  cin >> full_name;
  cout << "Your full name is : " << full_name << endl;
  cout << "Enter your full name: ";
  cin.getline(full_name,50);
  cout << "Your full name is: " << full_name << endl;
  */
  cout << "---------------------------------------" << endl;
  strcpy(temp,full_name);
  if(strcmp(temp,full_name) ==0) 
    cout << temp << " and " << full_name << " are the same " << endl;
  else
    cout << temp << " and " << full_name << " are different " << endl;
  cout << "---------------------------------------" << endl;
  cout << endl;
  return 0;
}
