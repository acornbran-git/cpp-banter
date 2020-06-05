#include <Common/Palindrome.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;
using namespace evolution;

bool Palindrome::isPalindrome(const std::string& word)
{
  bool palindrome = false;
  for(size_t i = 0;i<word.length()/2;i++)
  {
    if(word[i]==word[word.length()-1-i])
    {
      palindrome = true;
    }
  }
  return palindrome;
}

std::string Palindrome::makePalindrome(const size_t letters)
{
  std::vector<char> pal(letters);
  char chars[] = "abcdefghijklmnopqrstuvwxyz";
  srand(static_cast<unsigned int>(time(nullptr)));

  for(size_t i =0;i<letters;i++)
  {
    char randomChar = chars[rand()%26];
    pal[i]=pal[letters-i-1]=randomChar;
  }

  return std::string(pal.begin(), pal.end());
}
