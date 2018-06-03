#include <iostream>
#include <cstring>
using namespace std;
void r(int x);
void r(double x);
void r(int x,int y);
void s(char *s);
void s(char *s,char *s2);
int main()
{
	r(10);
	r(10.5);
	r(10,5);
	char str[80];
	char str2[80];
	strcpy(str,"it's just test");
	strcpy(str2,"Do you remember it?");
	s(str);
	s(str,str2);
	system("pause");
	return 0;
}
void r(int x){
	cout<<"1 "<<x<<endl;
}
void r(double x){
	cout<<"2 "<<x<<endl;
}
void r(int x,int y){
	cout<<"3 "<<x+y<<endl;
}
void s(char *s){
	cout<<"4 "<<s<<endl;
}
void s(char *s,char *s2){
	cout<<"5 "<<s<<"\n"<<s2<<endl;
}