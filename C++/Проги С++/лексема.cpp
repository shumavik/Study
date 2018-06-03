#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"Russian");
	char str[80];
	char token[80];
	int i,j;
	cout<<"Введите предложение:";
	gets(str);
	for(i=0; ;i++){
		for(j=0;str[i]!=' '&& str[i];j++,i++)
			token[j]=str[i];
		token[j]='\0';
		cout<<token<<endl;
		if(!str[i]) break;
	}
	system("pause");
	return 0;
}