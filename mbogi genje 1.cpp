#include <iostream>
using std::cout;
using std::cin;
int fib(int b)//declaration
{
	if (b==0)
	{
		return b;
	}
	if (b==1)
	{
		return b;
	}
	else
	{
		return fib(b-1)+fib(b-2);
	}
}
int main()
{
	int b, j=0;
	cout<<"enter the range of numbers in fibonacci series :";
	cin>>b;
	cout<<"\nFiboncci series is :";
	while(j<=b)
	{
		cout<<","<<fib(j);
		j++;
	}
}

