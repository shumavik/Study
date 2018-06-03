#include <iostream>
using namespace std;
int main()
{int j;int k;
 int &s=j;
 int *p;
 cout<<"j=?"<<endl;
 cin>>j;
	 cout<<j<<"______"<<s<<endl;
	cin>>s;
	cout<<j<<"_______"<<s<<endl;
	p=&j;
	cout<<*p<<endl;
	cin>>k;
	s=k;
	cout<<j<<endl;
	system("pause");
	return 0;
}