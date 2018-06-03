#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{	int i;
	char str[80];
	cout<<"vvedite stoku ";
	gets(str);
	for(i=strlen(str)-1;i>=0;i--) cout<<str[i];
	cout<<"\n";
	system("pause");
	return 0;
}