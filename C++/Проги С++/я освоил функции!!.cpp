#include <iostream>
#include <cstdlib>
using namespace std;
int funct(int x,int y);
void write();
int main()
{
	int x,y,r;
	cout<<"enter x ";
	cin>>x;
	cout<<endl<<"enter y ";
	cin>>y;
	funct(x,y);
	r=funct(x,y);
	write();
	cout<<r<<endl;
	system("pause");
	return 0;

}
	
	int funct(int x,int y)
	{
		return x*x+y*y;
	}

	void write()
	{
		cout<<"R= ";
	}