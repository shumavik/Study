#include <iostream>
#include <cstdio>
using namespace std;
char *find_str(char *sub,char *str);
int main()
{	setlocale(LC_CTYPE,"Russian");
	char *substr;
	char search[80],str[80];
	cout<<"Введите подстроку"<<endl;
	gets(search);
	cout<<"Введите основную строку"<<endl;
	gets(str);
	substr=find_str(search,str);
	cout<<"Найденная строка:"<<substr<<endl;
	system("pause");
	return 0;
}
char *find_str(char *sub,char *str){
	int t;
	char *a,*a2,*start;
	for(t=0;str[t];t++){
		a=&str[t];
		start=a;
		a2=sub;
		while(*a2 && *a2==*a){
			a++;
			a2++;
		}
	if(!*a2) return start;
	}
	return 0;
}