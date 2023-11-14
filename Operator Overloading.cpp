#include<iostream>
using namespace std;
class Complex
{
	private:
		int a,b;
	public:
		void setData()
		{
			int x,y;
			cout<<"Enter the Real and Imaginary number respectively to be added"<<endl;
			cin>>x>>y;
			a=x; b=y;
		}
		Complex operator+(Complex c)
		{
			Complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return(temp);
		}
		void showData()
		{
			cout<<"a= "<<a<<" b="<<b;
		}
};
main()
{
	Complex c1,c2,c3;
	c1.setData();
	c2.setData();
	c3=c1+c2;						//c3=c1.operator+(c2);
	c3.showData();
}
