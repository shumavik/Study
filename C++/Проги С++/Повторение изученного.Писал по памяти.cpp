#include <iostream>
#include <cstdlib>
using namespace std;
void funct2();
int funct1(int x,int y);
int a,b,res;

int main()
{

		cout<<"enter a ";
	cin>>a;
	cout<<endl<<"enter b ";
	cin>>b;
	funct1(a,b);
	funct2();
	for(res=0;res=funct1(a,b);res++){
		cout<<res<<endl;
	}
	if (res>10) cout<<1<<endl;
	else cout<<0<<endl;
	system("pause");
	return 0;

}

int funct1(int x,int y)
{
	return abs(x-y);
}
void funct2()
{
	cout<<"modul= "<<funct1(a,b)<<endl;
}
