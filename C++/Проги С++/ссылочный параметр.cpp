#include <iostream>
using namespace std;
void funct(int &f,int &p);
int main()
{	setlocale(LC_CTYPE,"Russian");
	int a,b;
	cout<<"введите а и b:"<<endl;
	cin>>a;
	cin>>b;
	cout<<"До перестановки:"<<a<<" and "<<b<<endl;
	funct(a,b);
	cout<<"После:"<<a<<" and "<<b;
	system("pause");
	return 0;
}
void funct(int &f,int &p){
	int t;
	t=f;
	f=p;
	p=t;
}
