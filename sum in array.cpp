#include <iostream>
using namespace ::std;
int main()
{
	int sum;
	double average;
	int marks[]={90,20,30,40,80,92,100};
	for(int i=0;i<7;i++)
	{
		sum=sum+marks[i];
	}
	average = sum/7.0;
	cout<<"sum is"<<sum<<"\n"<<"average is\t"<<average;
}
