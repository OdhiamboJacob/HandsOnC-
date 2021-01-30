#include <iostream>
using namespace ::std;
int main()
{
	int product_code;
	int total_cost=0;
	for(int i=0;i<10;i++)
	{
	cout<<"enter the code of the product bought\n";
	cin>>product_code;
	switch(product_code)
	{
		case 1:
			cout<<"omena\n";
			total_cost=total_cost + 150;
			break;
			case 2:
				cout<<"flour\n";
				total_cost=total_cost + 80;
				break;
				case 3:
					cout<<"cooking oil\n";
					total_cost=total_cost+180;
					break;
					case 4:
						cout<<"watch\n";
						total_cost=total_cost + 190;
						break;
						case 5:
							cout<<"geisha\n";
							total_cost=total_cost+162;
							break;
							default:
								cout<<"invlid entry";
								break;
								
	}
	}
	cout<<"total cost of products is \n"<<total_cost;
}
