#include <iostream>
using namespace std;

int main()
{
  // Establishes variables for the amount of the sale, the sales tax rate, the amount of the sales tax, and the total amount of the sale.
  float sale, taxRate, salesTax, total;

  // Asks the user for the amount of the sale and the sales tax rate
  cout << "Please input the amount for the sale: ";
  cin >> sale;
  cout << "Please input the sales tax rate as a decimal: ";
  cin >> taxRate;

  // Calculates the amount of the sales tax and the total amount of the sale.
  salesTax = sale * taxRate;
  total = sale + salesTax;

  // Displays the amount of the sales tax and the total amount of the sale.
  cout << "The sales tax is equal to $" << salesTax << endl;
  cout << "The total for the sale is equal to $" << total << endl;

  return 0;
}
