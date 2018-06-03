#include <iostream>
using namespace std;
int main()
{
	int len;
	cout<<"Please enter length stroki(ot 1 do 79 ";
	cin>>len;
	while(len>0 && len<80) {
		cout<<".";
		len--;
	}
	cout<<"\n";
system("pause");
return 0;

}