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
		friend parent SetData(parent);
};
parent SetData(parent p1)
{
	cin>>p1.a>>p1.b;
	return p1;
}
main()
{
	parent p;
	p.setData(3,5);
	p.showData();
	p=SetData(p);
	p.showData();
}
