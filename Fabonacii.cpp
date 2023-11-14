#include<iostream>
using namespace std;
class fabonacii
{
 private:
 	int x=0,y=1;
 public:
	fabonacii(int n)
	{
		cout<<"Series: "<<x<<" "<<y<<" ";
		for(int i=0;i<n-2;i++)
		{
			int z=x+y;
			x=y;
			y=z;
			cout<<z<<" ";
		}
	}
	friend void fun(fabonacii f);
};
void fun(fabonacii f)
{
	cout<<"\nFriend fun: "<<f.x<<f.y;
}
main()
{
	cout<<"Enter the terms\n";
	int n;
	cin>>n;
	fabonacii f(n);
	fun(f);
}
