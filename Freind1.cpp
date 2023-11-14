#include<iostream>
using namespace std;
class parent
{
	private:
		int a,b;
	public:
		void showData()
		{
			cout<<"a= "<<a<<"  b= "<<b<<endl;
		}
		void setData(int x,int y)
		{
			a=x; b=y;
		}
		friend void sum(parent);
};
void sum(parent p1)
{
	cout<<"sum= "<<p1.a+p1.b;
}
main()
{
	int a,b;
	cout<<"Enter any two number\n";
	cin>>a>>b;
	parent p;
	p.setData(a,b);
	p.showData();
	sum(p);
}
