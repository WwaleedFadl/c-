#include <iostream>
using namespace std;

int main() {
  char letter_grade{};
  cout << "Enter the letter grade you expect no the exam: ";
  cin >> letter_grade;
  //
  switch (letter_grade) {
    case 'a':
    case 'A': 
      cout << " You need a 90 or above study hard " << endl;
      break;
    case 'b':
    case 'B': 
      cout << " You need a 80 or above focus " << endl;
      break;
    case 'c':
    case 'C': 
      cout << " You need a 70 or above" << endl;
      break;
    case 'd':
    case 'D': 
      cout << " You need a 60 or above" << endl;
      break;
    case 'f':
    case 'F': 
      {
        char confirm{};
        cout << " Are you sure (y/n)? " << endl;
        cin >> confirm;
        if(confirm == 'y' || confirm == 'Y')
          cout << " Ok do not study... " << endl;
        else if(confirm != 'y' || confirm != 'Y')
          cout << " GO Study "<< endl;
        break;
      }
    default:
      cout << " you get what you want " << endl;
      break;
  }
  cout << endl;
  return 0;
}
