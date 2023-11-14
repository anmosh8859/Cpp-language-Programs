#include<iostream>
using namespace std;
class Account
{
	private:
	int balence;
	static float roi;
	public:
	void setBalence()
	{
		cout<<"Enter the Balence";
		cin>>balence;
	}
	int getBalence()
	{
		return balence;
	}
	static void setroi(float r)
	{
		roi=r;
	}
	float getroi()
	{
		return roi;
	} 
};
float Account:: roi;
main()
{
	int Balence;
	float Rate;
	Account a,a1;
	a.setBalence();
	Balence=a.getBalence();
	cout<<"Balence= "<<Balence;
	a.setroi(3.5f);
	Rate=a.getroi();
	cout<<"Rate of Interest= "<<Rate;
}

