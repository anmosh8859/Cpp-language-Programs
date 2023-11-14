#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		setData(int x,int y)
		{
			a=x;
			b=y;
		}
		showData()
		{
			cout<<"a= "<<a<<" b= "<<b<<endl;
		}
		complex operator-()			//overloading of unary operator
		{
			complex temp;
			temp.a=-a;
			temp.b=-b;
			return temp;
		}
};
main()
{
	complex c1,c2;
	cout<<"Enter the Real Number and Imaginary Number respectively\n";
	int a,b;
	cin>>a>>b;
	c1.setData(a,b);
	c1.showData();
	c2=-c1;									//actual call------->      "c2=c1.operator-();"
	c2.showData();
}
