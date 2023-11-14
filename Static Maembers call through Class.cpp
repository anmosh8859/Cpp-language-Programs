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
	static float getroi()
	{
		return roi;
	} 
};
float Account:: roi;
main()
{
	//int Balence;
	//Account::setBalence();
	//Balence=Account::getBalence();
	//cout<<"Balence= "<<Balence<<endl;
	/*This section will not work untill
	"Object" will be create ,So create the object of class #Account and then erase the 
	comment commands*/
	float Rate;
	Account::setroi(3.5f);
	Rate=Account::getroi();
	cout<<"Rate of Interest= "<<Rate;
}
