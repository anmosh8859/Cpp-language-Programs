#include<iostream>
using namespace std;
class Complex
{
	int a,b;
	public:
		void setdata(int x,int y)
		{
			a=x; b=y;
		}
		void showdata()
		{
			cout<<"a= "<<a<<endl<<"b= "<<b;
		}
		Complex add(Complex);
};
Complex Complex::add(Complex c)
	{
		Complex temp;
		temp.a=a+c.a;
		temp.b=b+c.b;
		return (temp);
	}
main()
{
	Complex c1,c2,c3;
	c1.setdata(3,4);
	c2.setdata(4,6);
	c3=c1.add(c2);
	c3.showdata();
}
