#include<iostream>
using namespace std;
class B;
class A
{
	private:
		int a,b;
	public:
		void setData(int x,int y)
		{
			a=x; b=y;
		}
		friend void sum(A,B);
};
class B
{
	private:
		int a,b;
	public:
		void setData(int x,int y)
		{
			a=x; b=y;
		}
		friend void sum(A,B);
};
void sum(A a,B b)
{
	cout<<"s1 "<<a.a+b.a<<" s2= "<<a.b+b.b;
}
main()
{
	int x,y;
	cout<<"Enter any two numbers\n";
	cin>>x>>y;
	A o1;
	B o2;
	o1.setData(x,y);
	o2.setData(5,6);
	sum(o1,o2);
}
