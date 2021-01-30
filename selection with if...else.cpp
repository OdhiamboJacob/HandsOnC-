#include <iostream>
using namespace ::std;
int main()
{
	int marks;
	cout<<"Enter your marks for grading\n";
	cin>>marks;
	if (marks>=40 && marks<=49)
	{
		cout<<"your grade is D";
	}
	if(marks>=50 && marks<=59)
	{
		cout<<"your grade is C";
	}
	if(marks>=60 && marks<=69)
	{
		cout<<"your grade is B";
	}
	if(marks>=70 && marks<=100)
	{
		cout<<"your grade is A";
	}
	if(marks>100)
	{
		cout<<"INVALID";
	}
	else if(marks<=39)
	{
		cout<<"you have fail";
	}
	
	
	
}
