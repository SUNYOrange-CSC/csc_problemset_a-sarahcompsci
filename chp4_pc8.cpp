#include <iostream>
using namespace std;

int main()
{
  string primary1, primary2;

  cout << "Enter two primary colors to be mixed: ";
  cin >> primary1 >> primary2;

  if (primary1 == "red" && primary2 == "blue")
  {
    cout << "When you mix red and blue, you get purple." << endl;
  }
  else if (primary1 == "blue" && primary2 == "red")
  {
    cout << "When you mix red and blue, you get purple." << endl;
  }
  else if (primary1 == "red" && primary2 == "yellow")
  {
    cout << "When you mix red and yellow, you get orange." << endl;
  }
  else if (primary1 == "yellow" && primary2 == "red")
  {
    cout << "When you mix red and yellow, you get orange." << endl;
  }
  else if (primary1 == "blue" && primary2 == "yellow")
  {
    cout << "When you mix blue and yellow, you get green." << endl;
  }
  else if (primary1 == "yellow" && primary2 == "blue")
  {
    cout << "When you mix blue and yellow, you get green." << endl;
  }
  else
  {
    cout << "You did not enter valid primary colors. Please write them in lowercase." << endl;
  }

  return 0;
}
