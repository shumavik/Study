#include <iostream>
using namespace std;
struct f{
	int a,b;
};
int main(){
	setlocale(LC_CTYPE,"Russian");
	f s1,s2;
	s1.a=s1.b=10;
	s2.a=s2.b=20;
	cout<<"Структуры до присваивания."<<endl;
	cout<<"s1:"<<s1.a<<"и"<<s1.b<<endl<<"***************"<<endl;
	cout<<"s2:"<<s2.a<<"и"<<s2.b<<endl<<"***************"<<endl;
	s2=s1;
	cout<<"Структруры после присваивания."<<endl;
	cout<<"s1:"<<s1.a<<"и"<<s1.b<<endl<<"***************"<<endl;
	cout<<"s2:"<<s2.a<<"и"<<s2.b<<endl<<"***************"<<endl;
	system("pause");
	return 0;
}