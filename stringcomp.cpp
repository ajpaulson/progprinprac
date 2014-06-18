#include "std_lib_facilities.h"

int main(int argc, char *argv[])
{
  cout << "Please enter two names\n";
  string first;
  string second;
  cin >> first >> second;   // read two strings
  if(first == second)
    cout << "That's the same name twice\n";
  else if(first < second)
    cout << first << " is alphabetically before " << second << '\n';
  else
    cout << first << " is alphabetically after " << second << '\n';
  return 0;
}
