#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		friend ostream& operator << (ostream &,complex );
		friend istream& operator >> (istream &,complex &);
};
ostream& operator << (ostream &out,complex c)
{
	cout<<"\n"<<c.a<<"+"<<c.b<<"i";
	return out;
}
istream& operator >> (istream &in,complex &c)
{
	cin>>c.a>>c.b;
	return in;
}
main()
{
	complex c1;
	cout<<"Enter the Real Number and Imaginary Number respectively\n";
	cin>>c1;
	cout<<c1;
}
