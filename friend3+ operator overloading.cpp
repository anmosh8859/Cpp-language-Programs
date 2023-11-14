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
		friend parent operator+(parent,parent);
};
parent operator+(parent x,parent y)
{
	parent sum;
	sum.a=x.a+y.a;
	sum.b=x.b+y.b;
	return sum;
}
main()
{
	parent p1,p2,p3;
	p1.setData(3,5);
	p1.showData();
	p2.setData(6,5);
	p2.showData();
	p3=p1+p2;														// actual process---->	operator+(p1,p2);
	p3.showData();
}
