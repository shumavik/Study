#include <iostream>
using namespace std;
struct sample{
	int a;
	char ch,rav;
}b;
struct simple{
	int a;
	char ch;
	char rav;
};
void r(sample again);
void f(simple parm);
int main(){
	struct simple a;
	a.a=1000;
	a.rav='=';
	a.ch='x';
	f(a);
	b.a=5;
	b.rav='=';
	b.ch='y';
	r(b);
	system("pause");
	return 0;
}
void f(simple parm){
	cout<<parm.ch;cout<<parm.rav;
	cout<<parm.a<<endl;
}
void r(sample again){
	cout<<again.ch;cout<<again.rav;
	cout<<again.a<<endl;
}