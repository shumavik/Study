#include <iostream>
#include <cstring>
using namespace std;
void mystrcat(char *s,char *s2,int size=-1);
int main()
{	
	char str[80]="it's just test.";
	char str2[80]="0123456789";
	mystrcat(str,str2,5);
	cout<<str<<endl;
	strcpy(str,"it'just test.");
	mystrcat(str,str2);
	cout<<str<<endl;
	system("pause");
	return 0;
}
void mystrcat(char *s,char *s2,int size){
	while(*s) s++;
	if(size==-1) size=strlen(s2);
	while(*s2 && size){
		*s=*s2;
		s++;
		s2++;
		size--;
	}

}