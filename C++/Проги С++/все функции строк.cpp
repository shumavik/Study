#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{	int t;
	char s1[80],s2[80];
	cout<<"Vvedite dve stoki: ";
	gets(s1);
	gets(s2);
	cout<<"Ix dlina= "<<strlen(s1);
	cout<<endl<<strlen(s2)<<endl;
	cout<<"obratno s1: ";
	for(t=strlen(s1)-1;t>=0;t--) cout<<s1[t];
	cout<<"\n \a";
	if (!strcmp(s1,s2)) cout<<"stroki ravniy \n";
	else cout<<"stroki ne ravniy";
	strcat(s1,s2);
	cout<<"obratno s1 and s2: "<<endl;
	for(t=strlen(s1)-1;t>=0;t--) cout<<s1[t];
	cout<<"\n";
	cout<<s1<<endl;
	strcpy(s1,s2);
	cout<<s1<<"and"<<s2<<" ";
	cout<<"teper ravniy \n";
	system("pause");
	return 0;
}