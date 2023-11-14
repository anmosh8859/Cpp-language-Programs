#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		friend ostream& operator << (ostream &,complex );
		friend istream& operator >> (istream &,complex &);
		friend complex operator+(complex,complex);
		friend complex operator-(complex,complex);
		friend complex operator*(complex,complex);
		friend complex operator/(complex,complex);
		friend complex operator%(complex,complex);
};
ostream& operator << (ostream &out,complex c)
{
	cout<<"\n"<<c.a<<"+("<<c.b<<")i";
	return out;
}
istream& operator >> (istream &in,complex &c)
{
	cin>>c.a>>c.b;
	return in;
}
complex operator +(complex x,complex y)
{
	complex sum;
	sum.a=x.a+y.a;
	sum.b=x.b+y.b;
	return sum;
}
complex operator -(complex x,complex y)
{
	complex sum;
	sum.a=x.a-y.a;
	sum.b=x.b-y.b;
	return sum;
}
complex operator *(complex x,complex y)
{
	complex sum;
	sum.a=x.a*y.a;
	sum.b=x.b*y.b;
	return sum;
}
complex operator /(complex x,complex y)
{
	complex sum;
	sum.a=x.a/y.a;
	sum.b=x.b/y.b;
	return sum;
}
complex operator %(complex x,complex y)
{
	complex sum;
	sum.a=x.a%y.a;
	sum.b=x.b%y.b;
	return sum;
}
main()
{
	complex c1,c2,c3;
	cout<<"Enter the Real Number and Imaginary Number respectively\n";
	cin>>c1>>c2;
	cout<<c1<<c2;
	c3=c1+c2;
	cout<<c3;
	c3=c1-c2;
	cout<<c3;
	c3=c1*c2;
	cout<<c3;
	c3=c1/c2;
	cout<<c3;
	c3=c1%c2;
	cout<<c3;
}
