#include<iostream>
using namespace std;
class Integer
{
	private:
		int n;
	public:
		setData(int x)
		{
			n=x;
		}
		showData()
		{
			cout<<"n= "<<n<<endl;
		}
		Integer operator++()			//overloading of unary operator
		{
			Integer intn;
			intn.n=++n;
			return intn;
		}
		Integer operator++(int)			//overloading of unary operator
		{
			Integer intn;
			intn.n=n++;
			return intn;
		}
		
};
main()
{
	Integer int1,int2;
	cout<<"Enter the Real Number and Imaginary Number respectively\n";
	int a;
	cin>>a;
	int1.setData(a);
	cout<<"Original no."<<endl;
	int1.showData();
		cout<<"post icrement"<<endl;
	int2=++int1;											//actual call------->      "c2=c1.operator++();"
	int1.showData();
	int2.showData();
	int1.setData(a);
	int2=int2++;											//actual call------->      "c2=c1.operator++(int);"
		cout<<"pre icrement"<<endl;
	int1.showData();
	int2.showData();
}
