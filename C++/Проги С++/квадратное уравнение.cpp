#include <iostream>

#include <cmath>
using namespace std;
int main()
{	
	int a,b,c;
	double D,X,X1,X2;
	setlocale(LC_CTYPE,"Russian");
	cout<<"��������� ������������� ��� ������������ ����������� ���������"<<endl;
	cout<<"������ ����������� a,b,c"<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	D=b*b-4*a*c;
	if(D<0) cout<<"������ ���\n";
	else if(D==0) {
		X=-b/(2*a);
		cout<<"������="<<X<<endl;
	}
	else {X1=(-b-sqrt(D))/(2*a);
	X2=(-b+sqrt(D))/(2*a);
	cout<<"����� �����:"<<X1<<" � "<<X2<<endl;}
	system("pause");
	return 0;
}