#include "std_lib_facilities.h"

int main(int argc, char *argv[])
{
  cout << "Please enter your first name (followed by 'enter'):\n";
  string first_name;        // first_name is a variable of type string
  cin >> first_name;        // read characters into first_name
  cout << "Hello, " << first_name << "!\n";
  return 0;
}
