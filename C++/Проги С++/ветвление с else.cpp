#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter a ";
	cin>>a;
	cout<<endl<<"enter b ";
	cin>>b;
	
	if(a<b) {
		cout<< "a<b"<<endl;
		cout<<"b-a= "<<b-a<<endl;
	}
	else {
		cout<<"a>b"<<endl;
		cout<<"a-b= "<<a-b<<endl;
	}

	system("pause");
	return 0;
}