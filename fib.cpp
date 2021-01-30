#include<iostream>
using namespace std;
int main()
{
	int i ,num, first=0, second=1,next;
	cout<<"how many terms to display :: ";
	cin>>num;
	
	cout<<"\nthe fiboncci series for ["<<num<<"] terms ::  ";
	for (i=0;i<num;i++)
	{
		cout<< ", " <<first<< "  ";
		next= first +second ;
	    first= second ;
	    second= next;
	
		
	}
	 return 0;
}
