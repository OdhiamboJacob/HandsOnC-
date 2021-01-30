
#include <iostream>
using namespace ::std;
int main()
{
	int sum=0;
	int count=0;
	int geostudent=0;
	int marks;
	double average;
	do
	{
		cout<<"enter student marks	";
		cin>>marks;
		sum=sum+marks;
		count=count+1;
		average=sum/count;
		geostudent++;
	}
	while(geostudent<=10);
	cout<<"the average is\t"<<average<<endl;
	cout<<"the sum is\t "<<sum;
	}
