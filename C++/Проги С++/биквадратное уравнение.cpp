#include <iostream>
#include <cmath>
using namespace std;
int main()
{	setlocale(LC_CTYPE,"Russian");
	double a,b,c,D;
	cout<<"������� ����������� ���������:"<<endl;
	cout<<"������� a: ";
	cin>>a;
	cout<<"������� b: ";
	cin>>b;
	cout<<"������� c: ";
	cin>>c;
	D=pow(b,2)-4*a*c;
	if (D<0) cout<<"������ ���"<<endl;
	else if(D==0){
		double X,t;
		X=-b/(2*a);
		t=X;
		cout<<"������ �����"<<-sqrt(t)<<" � "<<sqrt(t)<<endl;
	}
	else {double x1,x2,t1,t2;
	x1=(-b-sqrt(D))/(2*a);
	x2=(-b+sqrt(D))/(2*a);
	t1=x1;
	t2=x2;
	cout<<"����� �����:\n"<<"������ ����:"<<-sqrt(x1)<<" � "<<sqrt(x1)<<endl<<"������ ����:"<<-sqrt(x2)<<" � "<<sqrt(x2)<<endl;
	}
	system("pause");
	return 0;
}
