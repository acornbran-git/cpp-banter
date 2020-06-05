#include <tests/testPalindrome.h>
#include <Common/Palindrome.h>
#include <iostream>

using namespace std;
using namespace evolution;

void runPalindromTests() {
  cout << "running palindrome tests.." << endl << endl;
  makePalindrome();
  cout << "finished executing palindrome tests.." << endl << endl;
}

void makePalindrome() {
  cout << "\tbuilding a palindrome : " << Palindrome::makePalindrome(20) << endl;
}
