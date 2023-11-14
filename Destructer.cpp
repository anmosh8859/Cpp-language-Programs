#include<iostream>
using namespace std;
class Destructer
{
	private:
		static int a;
	public:
		~Destructer()
		{
			cout<<"this is destructer bhencho!\n";
		}
		void Destruct()
		{
			cout<<"Hey! It is an fuckin common func.\n";
		}
		Destructer()
		{
			cout<<"Hey! It is cunstructer\n";
		}
};
main()
{
	Destructer d;
	d.Destruct();
}
