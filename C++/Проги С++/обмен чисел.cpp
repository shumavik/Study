#include <iostream>
#include <cstring>
using namespace std;
void swap(int *x,int *y);
int main()
{	setlocale(LC_CTYPE,"Russian");
	int a,b;
	cout<<"������� �����"<<endl;
	cin>>a;
	cin>>b;
	cout<<"��� ����� �� ������:"<<endl<<a<<endl<<b<<endl;
	swap(&a,&b);
	cout<<"� ��� �����:"<<endl<<a<<endl<<b<<endl;
	system("pause");
	return 0;
}
void swap(int *x,int *y){
	int s;
	s=*x;
	*x=*y;
	*y=s;
}