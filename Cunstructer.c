#include<iostream>
using namespace std;
class test
{
	private:
		int a,b;
	public:
		test(int x, int y)
		{
			a=x; b=y;
			cout<<a<<b<<"1 st\n";
		}
		test(int x)
		{
			a=x;
			cout<<a<<"2nd\n";
		}
		test()
		{
			cout<<"3rd\n";
		}
};
main()
{
	test t1(3,4);
}
