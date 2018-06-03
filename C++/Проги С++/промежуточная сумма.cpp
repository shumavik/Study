#include <iostream>
#include <cstdlib>
using namespace std;
void total(int x);
int main()
{ int a;
	cout <<"enter a \n";
	cin>>a;
	total(a);
	system("pause");
	return 0;

}
void total(int x)
{
	int sum=0;
	int i,count;
	for(i=1;i<=abs(x);i++){
		sum=sum+i;
		for(count=0;count<10;count++)cout<<".";
		cout <<"promezh sum= "<<sum<<"\n";
	}

}