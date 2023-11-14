#include<iostream>
using namespace std;
class oddOrEven
{
public:
	oddOrEven(int n1)
	{
		while(n1>1)
		{
			n1=n1%2;
		}
		while(n1==0)
		{
		cout<<"Number is even";
		n1--;
		}
		while(n1==1)
		{
		cout<<"Number is odd";
		n1++;
		}
	}
};
main()
{
	int n;
	cout<<"Enter any number to be checked\n";
	cin>>n;
	oddOrEven o(n);
}
