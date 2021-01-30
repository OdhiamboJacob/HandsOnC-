#include <iostream>
using std::cout;
using std::cin;
int main()
{
	int b;
	int i;
	i=0;
	cout<<"enter constant vlue to get the multiplicaation tble\n:";
	cin>>b;
	while(i<=5)
	{
		cout<<i<<" x "<<b<<" = "<<i*b<<"\n";
		i++;
	}
}
