// if statment
#include <iostream>
using namespace std;

int main() {
  int num{};
  const int min{10};
  const int max{100};

  cout << "Enter a number between:   " << min << " And " << max << ":";

  cin >> num;

  if (num >= min) {
    cout << "\n====================== if statment 1 "
            "==============================="
         << endl;

    cout << num << " Is greater than " << min << endl;

    int diff{num - min};

    cout << num << " Is " << diff << " greater than " << min << endl;
  }

  if (num <= max) {
    cout << "\n====================== if statment 2 "
            "==============================="
         << endl;

    cout << num << " Is less than " << max << endl;

    int diff{max - num};

    cout << num << " Is " << diff << " less than or equal " << max << endl;
  }

  if (num >= min && num <= max) {
    cout << "\n====================== if statment 3"
            "==============================="
         << endl;

    cout << num << " is between " << max << " and " << min << endl;
  }

  if (num == min || num == max) {
    cout << "\n====================== if statment 4 "
            "==============================="
         << endl;

    cout << num << " is right on the boundry " << endl;
    cout << " This means all 4 statments will display " << endl;
  }
  cout << endl;
  return 0;
}
