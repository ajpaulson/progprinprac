#include "std_lib_facilities.h"

int main(int argc, char *argv[])
{
  cout << "Please enter your first name and age\n";
  string first_name;        // string variable
  double age;                  // integer variable
  cin >> first_name;        // read a string
  cin >> age;               // read an integer
  cout << "Hello, " << first_name << "(age " << age * 12 << ")\n";
  return 0;
}
