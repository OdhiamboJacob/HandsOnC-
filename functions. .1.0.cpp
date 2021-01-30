#include <iostream>
using std ::cout;
using std ::cin;
int AddNumbers(int x, int y)// funtion declaration
{
	int sum;
	sum = x+y;
	return sum;
}
int main()
{
	cout <<"The sum of 7 and 5 is\n"<<AddNumbers(7,5);//calling a function
	return 0;
}
