#include <iostream>
#include <cstdio>
using namespace std;
int main()
{	setlocale(LC_CTYPE,"Russian");
	char str[80];
	char token[80];
	char *p,*q;
	cout<<"Введите предложение:";
	gets(str);
	p=str;
	while(*p) {
		q=token;
		while(*p!=' '&&*p){
			*q=*p;
			q++;p++;
		}
	if(*p) p++;
	*q='\0';
	cout<<token<<endl;
	}
	system("pause");
	return 0;
}