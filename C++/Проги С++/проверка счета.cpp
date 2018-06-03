#include <iostream>
#include <cstdlib>
using namespace std;
void plus();
void minus();
void pro();
void del();
int num_right,allanswers=0;
int main()
{	int choose;
	setlocale(LC_CTYPE,"Russian");
	num_right=0;
	do{
		do{	cout<<"1.Сложение\n";
		cout<<"2.Вычитание\n";
		cout<<"3.Умножение\n";
		cout<<"4.Деление\n";
		cout<<"5.Обнулить количество верных ответов\n";
		cout<<"6.Выход из программы\n";
		cout<<"Выберите упражнение или опцию:"<<endl;
		cin>>choose;
	}while(choose<1||choose>6);
	switch(choose){
		case 1:
				cout<<"Сложите два числа и введите ответ"<<endl;
				plus();
				break;
		case 2:
				cout<<"Вычтите и введите ответ"<<endl;
				minus();
				break;
		case 3:
				cout<<"Найдите произведение двух чисел"<<endl;
				pro();
				break;
		case 4:
				cout<<"Деление"<<endl;
				del();
				break;
		case 5:
				cout<<"\nОбнуляем верные ответы\n";
				num_right=0;
				break;
		case 6:
				cout<<"Твоя статистика:"<<endl;
				cout<<"Верных ответов:"<<num_right;
				cout<<"\nНеверных ответов:"<<allanswers-num_right;
				cout<<"\nБыло весело,не правда ли?\nДо скорой встречи!!!\n";
				break;
			}
	}while(choose!=6);
	system("pause");
	return 0;
}
void plus()
{int count;
		int a,b,ans;
		a=rand()%100;
		b=rand()%100;
		for(count=0;count<3;count++){
			cout<<"Сколько будет"<<a<<"+"<<b<<"?";
			cin>>ans;
			if (ans==a+b){
				cout<<"Правильно!!\n";
				num_right++;
				allanswers++;return;}
			else {cout<<"\nНеправильно\n";allanswers++; }}
			cout<<"ВЫ использовали все свои попытки."<<endl;	
			cout<<"Правильный ответ равен:"<<a+b<<endl;
			}	

void minus(){
	int count;
		int a,b,ans;
		a=rand()%100;
		b=rand()%100;
		for(count=0;count<3;count++){
			cout<<"Сколько будет"<<a<<"-"<<b<<"?";
			cin>>ans;
			if (ans==a-b){
				cout<<"Правильно!!\n";
				num_right++;
				allanswers++;return;}
			else {cout<<"\nНеправильно\n";allanswers++; }}
			cout<<"ВЫ использовали все свои попытки."<<endl;	
			cout<<"Правильный ответ равен:"<<a-b<<endl;
			}	

void pro(){
	int count;
		int a,b,ans;
		a=rand()%100;
		b=rand()%100;
		for(count=0;count<3;count++){
			cout<<"Сколько будет"<<a<<"*"<<b<<"?";
			cin>>ans;
			if (ans==a*b){
				cout<<"Правильно!!\n";
				num_right++;
				allanswers++;return;}
			else {cout<<"\nНеправильно\n";allanswers++; }}
			cout<<"ВЫ использовали все свои попытки."<<endl;	
			cout<<"Правильный ответ равен:"<<a*b<<endl;
			}	

void del(){
	int count;
		int a,b,ans;
		a=rand()%100;
		b=rand()%100;
		for(count=0;count<3;count++){
			cout<<"Сколько будет(Указать целую часть)"<<a<<"/"<<b<<"?";
			cin>>ans;
			if (b==0) {a=rand()%100;
		b=rand()%100;}
			if (ans==a/b){
				cout<<"Правильно!!\n";
				num_right++;
				allanswers++;return;}
			else {cout<<"\nНеправильно\n";allanswers++; }}
			cout<<"ВЫ использовали все свои попытки."<<endl;	
			cout<<"Правильный ответ равен:"<<a/b<<endl;
			}
