#include<iostream>
using namespace std;
inline int sum(int&,int&);
main()
{
	int a,b;
	cout<<"Enter ttwo numbers to add\n";
	cin>>a>>b;
	int c=sum(a,b);
	cout<<"Sum= "<<c;
}
int sum(int &x,int &y)
{
	return(x+y);
}
