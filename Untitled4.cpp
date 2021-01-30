#include <iostream>
using std ::cout;
using std :: cin;
void mximum(double x, double y, double z)
{
	double max;
	max = x;
	if (y>x)
	{
		max =y;
	}
	if (z>x)
	{
		max = z;
	}
	cout <<"mximum number is \t"<< max;
}
void loop(int x)
{
	for (int i=0; i<=x; i++)
	{
		cout <<i <<"\t\t"<< i*i <<"\n";
	}
}
int main()
{
	mximum (80,20,100);
	cout<<"\n";
	loop(10);
}
