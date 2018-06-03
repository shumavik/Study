#include <iostream>
#include <cstdio>
using namespace std;
void reverse(char *s);
int main()
{	setlocale(LC_CTYPE,"Russian");
	char str[80];
	cout<<"¬ведите текст:";
	gets(str);
	reverse(str);
	cout<<endl;
	system("pause");
	return 0;
}
void reverse(char *s){
	if(*s) reverse(s+1);
	else return;
	cout<<*s;
}