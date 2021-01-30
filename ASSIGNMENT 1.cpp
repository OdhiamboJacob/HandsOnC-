#include <iostream>
using std::cout;
using std::cin;
int fibonacci(int a)
{
	if((a==1)||(a==0))
		{
			return a;
		}
	else
	{
		return fibonacci(a-1)+ fibonacci(a-2);
	}
}
int main()
{
	int a, i=0;
	cout<<"enter the number of terms of series : ";
	cin >> a;
	cout<<"\nFibonacci siries : ";
	while (i<=a)
	{
		cout<< " \n"<<fibonacci(i);
		i++;
	}
	return 0;
}
