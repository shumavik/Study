#include <iostream>
using namespace std;
int main()
{
	int *p,*q;
	p=new int;
	q=new int(99);
	*p=20;
	cout<<*p<<endl;
	cout<<*q<<endl;
	delete q;
	cout<<*p<<endl;
	delete p;
	system("pause");
	return 0;
}