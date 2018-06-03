#include <iostream>
#include <cmath>
using namespace std;
int main()
{	setlocale(LC_CTYPE,"Russian");
	int x,y,choose;
		do{
			do{	
				cout<<"1.+\n";
				cout<<"2.-\n";
				cout<<"3.*\n";
				cout<<"4./\n";
				cout<<"5.^\n";
				cout<<"6.Квадратный корень \n";
				cout<<"7.Выход из калькулятора\n";
				cout<<"Выбирете опцию:";
				cin>>choose;
			}while(choose<1||choose>7);
			switch(choose){
			case 1:
				cout<<"СЛОЖЕНИЕ"<<endl;
				cout<<"Первое число:";
				cin>>x;
				cout<<"Второе число:";
				cin>>y;
				cout<<"Результат:"<<x+y<<endl;
				break;
			case 2:
				cout<<"ВЫЧИТАНИЕ"<<endl;
				cout<<"Первое число:";
				cin>>x;
				cout<<"Второе число:";
				cin>>y;
				cout<<"Результат:"<<x-y<<endl;
				break;
			case 3:
				cout<<"УМНОЖЕНИЕ"<<endl;
				cout<<"Первое число:";
				cin>>x;
				cout<<"Второе число:";
				cin>>y;
				cout<<"Результат:"<<x*y<<endl;
				break;
			case 4:
				cout<<"ДЕЛЕНИЕ"<<endl;
				double a,b;
				cout<<"Первое число:";
				cin>>a;
				cout<<"Второе число:";
				cin>>b;
				cout<<"Результат:"<<a/b<<endl;
				break;
			case 5:double q,r;
				cout<<"СТЕПЕНЬ"<<endl;
				cout<<"Основание:";
				cin>>q;
				cout<<"Показатель:";
				cin>>r;
				cout<<"Результат:"<<pow(q,r)<<endl;
				break;
			case 6:
				double z;
				cout<<"КВАДРАТНЫЙ КОРЕНЬ"<<endl;
				cout<<"Введите число:";
				cin>>z;
				cout<<"Результат:"<<sqrt(z)<<endl;
				break;
			case 7:
				cout<<"Отключение"<<endl;
			}
		}while(choose!=7);
		system("pause");
		return 0;
}