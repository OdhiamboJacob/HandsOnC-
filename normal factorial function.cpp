#include <iostream>
using std::cout;
using std :: cin;
int factorial(int n)
{
	int fact =1;
	for (int i =n ; i >0; i--)
	{
		fact = fact * i;
	}
		return fact;
}
int main()
{
	cout <<factorial(5);
}


