#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
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
  cout << "---------------------------------------" << endl;
  strcpy(temp,full_name);
  if(strcmp(temp,full_name) ==0) 
    cout << temp << " and " << full_name << " are the same " << endl;
  else
    cout << temp << " and " << full_name << " are different " << endl;
  cout << "---------------------------------------" << endl;
  string s1 {"Frank"};
  cout << s1 << endl;
  string s2{"Frank",3};
  cout << s2 << endl;
  string s1;
  s1 = "C++ Rocks!";
  string s2 {"Hello"};
  s2 = s1;
  cout << s1 << endl;
  cout << s2 << endl;
  string part1 {"C++"};
  string part2 {" is a powerful"};
  string sentence;
  sentence = part1 + " " + part2 + " language";
  cout << sentence << endl;
  string s1;
  string s2 {"Frank"};
  cout << s2[0] << endl;
  cout << s2.at(0) << endl;
  string s1{"Frank"};

  for(char c:s1)
    cout << c << endl;

  string s1{"Frank"};

  for(int c:s1)
    cout << c << endl;

  string s1 {"This is a test"};
  cout << s1.substr(0,4) << endl;
  cout << s1.substr(5,2) << endl;
  cout << s1.substr(10,4) << endl;

  string s1 {"This is a test"};

  cout << s1.find("This") << endl;
  cout << s1.find("is") << endl;
  cout << s1.find("a") << endl;
  cout << s1.find("test") << endl;
  cout << s1.find("e") << endl;
  cout << s1.find("is",4) << endl;
  cout << s1.find("waleed") << endl;

  //cout << s1.erase(0,5) << endl;
  string s1 {"Frank "};
  cout << s1.length() << endl;
  s1 += " Waleed";
  cout << s1 << endl;
  cout << s1.length() << endl;

  */

  string s1;
  // cin >> s1;
  //cout  << s1 << endl;

  //getline(cin,s1);
  //cout << s1 << endl;
  getline(cin,s1,'x');
  cout << s1 << endl;
  cout << endl;
  return 0;
}
