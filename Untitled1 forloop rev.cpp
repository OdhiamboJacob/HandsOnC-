#include <iostream>
using std::cout;
using std::cin;
int main()
{
	int b;
	int i;
	for(i=0; i<=10; i++)
	{
		cout<<i<<",\n";
	}
	while (b<=5)
{
	int c=10;
	cout<<"the product of "<<b<< " and "<<c<< " = "<<b*c<<"\n";
	b++;
	
}
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
do 
{
	int marks;
	int sum = 0;
	int count = 0;
	float avr;
	int i=1;
	cout<<"enter marks to get the average adn the sum ; ";
	cin>>marks;
	sum = sum + marks;
	count = count + 1;
	avr	= sum/count;
	i++;
	cout<<"The sum is ; "<<sum<< "\n";
	cout<< "The average is ; "<< avr;
	
}


