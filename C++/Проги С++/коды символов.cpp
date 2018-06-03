#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{	setlocale(LC_CTYPE,"Russian");
	char s[80];
	char *p1;
	do{
		p1=s;
		cout<<"¬ведите строку:";
		gets(p1);
		while(*p1) cout<<(int) *p1++<<' '<<endl;
	}while(strcmp(s,"end"));
	system("pause");
	return 0;
}