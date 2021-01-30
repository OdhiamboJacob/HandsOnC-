#include <iostream>
using std::cout;
using std ::cin;
int main()
{
	int total=0;
	int product_code;
	for (int i=1;i<=5;i++)
	{
		cout<<"enter 5 product codes to find their total cost\n";
		cin>>product_code;
		switch(product_code)
		{
			case 1:
				cout<<"fish\n";
				total=total+250;
				break;
				case 2:
					cout<<"eggs\n";
					total = total+350;
					break;
					case 3:
						cout<<"tomatoes\n";
						total=total+200;
						break;
						default:
							cout<<"invalid input for the code!\n";
		}
	}
	cout<<"the total cost of the comodities is : "<<total<<"\n";
	cout<<"thamk you for shopping with us!";
}
