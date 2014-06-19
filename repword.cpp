#include "std_lib_facilities.h"

int main(int argc, char *argv[])
{
  string previous = " ";    // previous word; initialised to "not a word"
  string current;           // current word
  while (cin >> current)   // read a stream of words
  {
    if (previous == current)  // check if the word is the same as last
      cout << "repeated word: " << current << '\n';
    previous = current;
  }
  return 0;
}
