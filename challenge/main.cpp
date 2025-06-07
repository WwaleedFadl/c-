#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> numbers{1,2,3,4};
  char selection{};
  do {
    //Display Menu 
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display menu of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
    cin >> selection;

    if(selection == 'P' || selection == 'p'){
      if(numbers.size() == 0) {
        cout << "[] - the list is empty." << endl;
      }else{
        cout << "[ ";
        for(auto num:numbers){
          cout << num << "  ,";
        }
        cout << " ]" << endl;
        }
    } else if (selection == 'A' || selection == 'a'){
        int num_to_add{};
        cout << "Enter an integer to be added to the list: " << endl;
        cin >> num_to_add;
        numbers.push_back(num_to_add);
        cout << "We added your number "<< num_to_add << endl;
    }else if(selection == 'M' || selection == 'm'){
        if(numbers.size()==0){
        cout << "Unable to calculate mean - no data.";
      }else{
        int total{};
        for(auto num:numbers){
          total += num;
        }
        cout << "The mean is: " << static_cast<double>(total/numbers.size()) << endl;
      }
    }
  } while (selection != 'q' && selection != 'Q');
  cout << endl;
  return 0;
}
