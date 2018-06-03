#include <iostream>
using namespace std;
int main()
{
	char *q;
	double *p;
	int i;
	q=new char[3];
	p=new double[10];
	for(i=0;i<10;i++) p[i]=100.00+i;
	for(i=0;i<10;i++) cout<<p[i]<<endl;
	delete [] p;
	q[0]='C';
	q[1]='+';
	q[2]='+';
	for(i=0;i<3;i++) cout<<q[i]<<endl;
	delete [] q;
	system("pause");
	return 0;
}