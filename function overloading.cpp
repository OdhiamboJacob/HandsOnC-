#include <iostream>
using std::cout;
using std :: cin;
int multiply(int x, int y)
{
	int multiplication;
	multiplication = x*y;
	return multiplication;
}
int multiply(int x, int y, int z)
{
	int multiplication;
	multiplication = x*y*z;
	return multiplication;
}
double multiply(double x, double y)
{
	double divide = x/y;
	return divide;
}
int main()
{
	cout <<multiply(9,7)<<"\n";
	cout << multiply(10,20,30)<<"\n";
	cout << multiply(9.2,3.2)<< "\n";
}
