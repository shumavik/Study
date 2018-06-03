#include <iostream>
#include <cctype>
#include <cstdio>
using namespace std;
int main()
{
	char str[80];
	char *p;
	int i;
	gets(str);
	p=str;
	for(i=0;p[i];i++)p[i]=toupper(p[i]);
	cout<<p<<endl;
	system("pause");
	return 0;
}