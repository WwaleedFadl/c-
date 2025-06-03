
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int length{},width{},height{};
  double base_cost{2.50};

  const int tire1_threshold{100};
  const int tire2_threshold{500};

  int max_midension_length{10};

  double tire1_surcharge{0.01};
  double tire2_surcharge{0.25};

  int package_volume{};

  cout << "Welcome to the package cost calculator " << endl;
  cout << "Enter length , width and height of the package seperated by spaces: ";
  cin >> length >> width >> height;

  if(length > max_midension_length || width > max_midension_length || height > max_midension_length) {
      cout << "Sorry package rejected dimensions exedded." << endl;
  }else {
    double  package_cost{};
    package_volume = length * width * height;
    package_cost = base_cost;


    if(package_volume > tire2_surcharge) {
      package_cost += package_cost * tire2_surcharge;
      cout << "  Adding tier to surcharge " << endl;
    } else if (package_volume > tire1_threshold) {
      package_cost += package_cost * tire1_surcharge;
      cout << "  Adding tier to surcharge " << endl;
    }
    

    cout << fixed << setprecision(2);
    cout << " The volume of your package is " << package_volume << endl;
    cout << " Your package will cost $ " << package_cost << endl;
  }
   cout << endl;
  return 0;
}
