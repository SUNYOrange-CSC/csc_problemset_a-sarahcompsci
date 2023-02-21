#include <iostream>
using namespace std;

int main()
{
  // Establishes variable for sugar, butter, and flour amounts per 48 cookies, the amount of cookies needed, and the total amount of sugar, butter, and flour needed.
  float sugarPer = 1.5, butterPer = 1, flourPer = 2.75, cookies, totalSugar, totalButter, totalFlour;

  // Asks the user how many cookies they want to make.
  cout << "How many cookies do you want to make? ";
  cin >> cookies;

  // Calculates the amount of sugar, butter, and flour the user will need.
  totalSugar = (sugarPer / 48) * cookies;
  totalButter = (butterPer / 48) * cookies;
  totalFlour = (flourPer / 48) * cookies;

  // Displays the amount of sugar, butter, and flour the user will need.
  cout << "You need " << totalSugar << " cups of sugar." << endl;
  cout << "You need " << totalButter << " cups of butter." << endl;
  cout << "You need " << totalFlour << " cups of flour." << endl;

  return 0;
}
