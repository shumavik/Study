#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int find_str(char *sub,char *str);
int main()
{	setlocale(LC_CTYPE,"Russian");
	int index;
	char search[80];
	char str[80];
	cout<<"������� ������ ������� �����"<<endl;
	gets(search);
	cout<<"������� ������ � ������� ���� ����� ���������"<<endl;
	gets(str);
	index=find_str(search,str);
	cout<<"������ ����� "<<index<<endl;
	system("pause");
	return 0;
}
int find_str(char *sub,char *str){
	int t;
	char *a,*a2;
	for(t=0;str[t];t++){
		a=&str[t];
		a2=sub;
		while(*a2 && *a2==*a){
			a++;
			a2++;
		}
	if(!*a2) return t;
	}
	return -1;
}