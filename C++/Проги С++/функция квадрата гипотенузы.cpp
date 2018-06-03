#include <iostream>
#include <cstdlib>
using namespace std;
double funct(double x,double y);
int main()
{
	double x,y;
	cout<<"enter x ";
	cin>>x;
	cout<<"enter y ";
	cin>>y;
	funct(x,y);
	cout<<"quadro gipotenuza= "<<funct(x,y)<<endl;
	system("pause");
	return 0;

}
	double funct(double x,double y)
	{
		return x*x+y*y;
	}