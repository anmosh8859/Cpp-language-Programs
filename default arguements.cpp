#include<iostream>
using namespace std;
inline void ar(float);
inline void ar(int,int,int=1);
main()
{
	int r;
	cout<<"Enter the radius of circle\n";
	cin>>r;
	ar(r);
	int l,b;
	cout<<"Enter the length and breadth of rectangle respectively\n";
	cin>>l>>b;
	ar(l,b);
	int h;
	cout<<"\nEnter the length,breadth and height of rectangle respectively\nLength= ";
	cin>>l;
	cout<<"Breadth= ";
	cin>>b;
	cout<<"Height= ";
	cin>>h;
	ar(l,b,h);
}
void ar(float r)
{
	cout<<"Area of Circle= "<<(3.14*r*r)<<endl;
}
void ar(int x,int y,int z)
{
	cout<<"\nArea of rectangle/Cuboid= "<<(x*y*z)<<endl;
}
