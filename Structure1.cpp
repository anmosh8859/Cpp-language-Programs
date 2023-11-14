#include<iostream>
using namespace std;
struct student
{
	private: 
	int rollno;
	char name[20];
	float percentage;
	public:
	void inputdata()
	{
		cout<<"Enter the 'Roll Number','Name' and 'Percentage of Student respectively'\n";
		cin>>rollno>>name>>percentage;
		if(rollno<0)
		{
			rollno=-rollno;
		}
	}
	void showdata()
	{
		cout<<endl<<"Roll No.= "<<rollno<<"\nName= "<<name<<"\nPercentage= "<<percentage<<endl;
	}
};
main()
{
	student s1;
	s1.inputdata();
	s1.showdata();
}
