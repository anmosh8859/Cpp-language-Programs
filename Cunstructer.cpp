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
			cout<<a<<b<<" 1st\n";
		}
		test(int x)
		{
			a=x;
			cout<<a<<" 2nd\n";
		}
		test()
		{
			cout<<" 3rd\n";
		}
		test(test &t1)
		{
			cout<<"My name is khan\n";
		}
};
main()
{
	test t1(3,4),t2(6),t3(t1),t;
}
