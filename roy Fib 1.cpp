#include <iostream>
using std::cout;
using std::cin;
int fib(int b)
{
	if(b==0)
	{
		return b;
	}
	if(b==1)
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
	int b, x=0;
	cout<<"Enter the range of numbers you want in the siries : ";
	cin>>b;
	cout<<"fibonacci series:";
	while(x<=b)
	{
		cout<<","<<fib(x);
		x++;
	}
	return 0;
}
