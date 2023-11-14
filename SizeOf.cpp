#include<iostream>
using namespace std;
main()
{
	int i;
	char p,q;
	q=&i;
	p=&i+1;
	cout<<(p-q);
	return 0;
}
