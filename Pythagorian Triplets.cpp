#include<iostream>
using namespace std;
class triplet
{
	private:
		int l=1,b=1,h=1;
	public:
		triplet(int n)
		{
			while(n>0)
			{
				if(l*l+b*b==h*h)
				{
				cout<<"Length= "<<l<<" Breadth= "<<b<<" Height= "<<h<<endl;
				}
				else
				{
				h++;
				for(;l<h;l++)
				{
				if(l*l+b*b==h*h)
				{
					cout<<"Length= "<<l<<" Breadth= "<<b<<" Height= "<<h<<endl;
				}
				else
				{
					for(;l<h;b++)
					{
						if(l*l+b*b==h*h)
						{
							cout<<"Length= "<<l<<" Breadth= "<<b<<" Height= "<<h<<endl;
						}
					}
				}
				}
			}
				n--;
			}
		}
};
main()
{
	cout<<"Enter the number of triplets you need"<<endl;
	int n;
	cin>>n;
	triplet t(n);
}
