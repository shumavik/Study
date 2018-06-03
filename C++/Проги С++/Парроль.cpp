#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
bool password();
int main()
{
	if (password()) cout<<"dostup razreshen"<<endl;
	else cout<<"dostup zapreshen "<<endl;
	system("pause");
	return 0;
}
bool password()
{
	char s[80];
	cout<<"Vvedite Parol";
	gets(s);
	if (strcmp(s, "Parrol")) {cout<<"parol=false";
	return false ;}
	return true;
}