#include <iostream>
#include <cstring>
using namespace std;
void swap(int *x,int *y);
int main()
{	setlocale(LC_CTYPE,"Russian");
	int a,b;
	cout<<"Введите числа"<<endl;
	cin>>a;
	cin>>b;
	cout<<"Вот числа до обмена:"<<endl<<a<<endl<<b<<endl;
	swap(&a,&b);
	cout<<"А вот после:"<<endl<<a<<endl<<b<<endl;
	system("pause");
	return 0;
}
void swap(int *x,int *y){
	int s;
	s=*x;
	*x=*y;
	*y=s;
}