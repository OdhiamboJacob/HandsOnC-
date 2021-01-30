#include <iostream>
using std::cout;
using std :: cin;
int factorial(int n)
{
	if(n == 1)
	{
		return 1;
	}
	
	else
	{
		return n * factorial(n - 1);
	}
}
int main()
{
	cout <<factorial(5);
}
