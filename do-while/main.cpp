#include <iostream>
using namespace std;

int main(){
  /*
  int number;

  do {
    cout << "Enter an integer between 1 and 5: ";
    cin >> number;
  } while(number <= 1 || number >= 5);
  */


  /*
  char selection{};

  do{
    double width{},height{};
    cout << "Enter width and height seperated by a space: ";
    cin >> width >> height;
    double area {width * height};
    cout << "The area is : " << area << endl;
    cout << "Calculate another ? (Y/N): ";
    cin >> selection;
  } while(selection == 'Y' || selection == 'y');
  cout <<"Thanks" <<endl;
  */

  char selection{};
  do{
    cout << "\n ---------------------------- " << endl;
    cout << "1.Do this" << endl;
    cout << "2.Do that" << endl;
    cout << "3.Do this and that" << endl;
    cout << "Q.Quit doing this" << endl;
    cout << "\n Enter your selection: " << endl;
    cin >> selection;

    if(selection == '1')
      cout << "1 will do that >>  Doing this <<" << endl;
    else if(selection == '2')
      cout << "2 will do this >>  Doing that <<" << endl;
    else if(selection == '3') 
       cout << "3 will do this and that >>  Doing this and that <<" << endl;
    else if(selection == 'q' || selection == 'Q')
        cout << ">> Good Bye <<" << endl;
    else
      cout << "UNKNOWN OPTION -- TRY AGAIN...." << endl;
  }while(selection != 'q' && selection != 'Q');
  cout <<endl;
  return 0;
}
