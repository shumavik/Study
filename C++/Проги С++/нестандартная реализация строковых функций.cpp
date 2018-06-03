#include <iostream>
#include <cstdio>
using namespace std;
void mystrcpy(char *strc);
int mystrlen(char *str);
void mystrcat(char *stra1,char *stra2);
int main()
{	setlocale(LC_CTYPE,"Russian");
	int choose;
	do{do{cout<<"1.функция strlen"<<endl;
		cout<<"2.функция strcpy"<<endl;
		cout<<"3.функция strcat"<<endl;
		cout<<"4.Выход"<<endl;
		cout<<"Ваш выбор?"<<endl;
		cin>>choose;
	}while(choose<1||choose>4);
		switch(choose){
		case 1:
			char str[80];
			cout<<"strlen:"<<endl;
			cout<<"Введите строку:"<<endl;
			cin>>str;
			cout<<mystrlen(str)<<endl;
			cout<<"*************"<<endl<<"*************"<<endl;
			break;
		case 2:
			char strc[80];
			cout<<"strcpy"<<endl;
			cout<<"Введите строку для копирования:";
			cin>>strc;
			cout<<"Копируем в другую строку.Получилось:";
			mystrcpy(strc);
			break;
		case 3:
			char stra1[30];
			char stra2[30];
			cout<<"Введите строки для склеивания"<<endl;
			cout<<"1-ая строка:"<<endl;
			cin>>stra1;
			cout<<"2-ая строка:"<<endl;
			cin>>stra2;
			cout<<"Получилось:";
			mystrcat(stra1,stra2);
			break;
		case 4:
			cout<<"Пока!!!"<<endl;
			break;
	}
	}while(choose!=4);
	system("pause");
	return 0;
}
int mystrlen(char *str){
	int i;
	for(i=0;str[i];i++);
	return i;
}
void mystrcpy(char *strc){
	while(*strc) {cout<<*strc;
	strc++;
	}
	cout<<endl;
}
void mystrcat(char *stra1,char *stra2){
	while(*stra1){cout<<*stra1;stra1++;}
	while(*stra2){cout<<*stra2;stra2++;}
	cout<<endl;
}