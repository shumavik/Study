#include <iostream>
using namespace std;
double &f();
double val=100.0;
int main()
{	
	double news;
	cout<<f()<<"\n";
	news=f();
	cout<<news<<endl;
	f()=99.999;
	cout<<f()<<endl;
	system("pause");
	return 0;
}
double &f()
{
	return val;
}