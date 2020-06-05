#include <iostream>
#include <cstdlib>
#include <ctime>

bool isPalindrome(const std::string word)
{
	bool palindrome = false;
	for(int i = 0;i<word.length()/2;i++)
	{
		if(word[i]==word[word.length()-1-i])
		{
			palindrome = true;
		}
	}
	return palindrome;
}

std::string makePalindrome(int letters)
{
	char pal[letters];
	char chars[] = "abcdefghijklmnopqrstuvwxyz";
	srand(time(0));
	
	for(int i =0;i<letters;i++)
	{
		char randomChar = chars[rand()%26];
		pal[i]=pal[letters-i-1]=randomChar;
	}
	
	std::string palin;
	for(int j = 0;j<letters;j++)
	{
		palin = palin + pal[j];
	}
	
	return palin;
}

int main()
{
	srand(time(0));
	std::cout << makePalindrome(rand()%10) << std::endl;
	return 0;
}
