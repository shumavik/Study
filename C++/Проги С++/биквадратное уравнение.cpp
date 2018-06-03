#include <iostream>
#include <cmath>
using namespace std;
int main()
{	setlocale(LC_CTYPE,"Russian");
	double a,b,c,D;
	cout<<"Введите коэффиценты уравнения:"<<endl;
	cout<<"Введите a: ";
	cin>>a;
	cout<<"Введите b: ";
	cin>>b;
	cout<<"Введите c: ";
	cin>>c;
	D=pow(b,2)-4*a*c;
	if (D<0) cout<<"Корней нет"<<endl;
	else if(D==0){
		double X,t;
		X=-b/(2*a);
		t=X;
		cout<<"Корень равен"<<-sqrt(t)<<" и "<<sqrt(t)<<endl;
	}
	else {double x1,x2,t1,t2;
	x1=(-b-sqrt(D))/(2*a);
	x2=(-b+sqrt(D))/(2*a);
	t1=x1;
	t2=x2;
	cout<<"Корни равны:\n"<<"Первая пара:"<<-sqrt(x1)<<" и "<<sqrt(x1)<<endl<<"Вторая пара:"<<-sqrt(x2)<<" и "<<sqrt(x2)<<endl;
	}
	system("pause");
	return 0;
}
