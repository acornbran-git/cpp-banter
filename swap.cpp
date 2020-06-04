#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a=0,b=0;
    std::cout << "Enter a :";
    std::cin >> a;
    std::cout << "Enter b :";
    std::cin >> b;
    swap(&a,&b);
    std::cout << "a is now : " << a << std::endl;
    std::cout << "b is now : " << b << std::endl;
}