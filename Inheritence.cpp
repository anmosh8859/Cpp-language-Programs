#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	protected:
		A(int x)
		{
			a=x;
		}
		void setData(int x)
		{ a=x;}
		void showData()
		{ cout<<a<<endl;}
};
class B:private A
{
	private:
		int b;
	public:
		B(int x,int y):A(x)
		{
			b=y;
		}
		void setValue(int x)
		{setData(x);}
		void showValue()
		{
			showData();
			cout<<b<<endl;
		}
};
/*class C:public B					//A's members are unaccessible because A's all members are private for C.
{
	public:
		void setValue(int x)
		{setData(x);}
};*/
main()
{
	cout<<"Enter the values of a and b"<<endl;
	int x,y;
	cin>>x>>y;
	B b(x,y);
	b.showValue();
}
