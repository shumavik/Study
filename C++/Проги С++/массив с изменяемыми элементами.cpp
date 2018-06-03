#include <iostream>
using namespace std;
int vals[10];
void change(int i);
int search(int i);
int searchres(int res);
int main()
{setlocale(LC_CTYPE,"Russian");
	int i,choose;
	do{
		do{
			cout<<"1.Заполнить массив"<<endl;
			cout<<"2.Изменить элемент массива"<<endl;
			cout<<"3.Просмотреть массив"<<endl;
			cout<<"4.Выход из программы"<<endl;
			cout<<"Выберите опцию:";
			cin>>choose;
			if (choose<1 || choose>4) cout<<"Некорректный ввод.Попробуйте еще раз."<<endl;
		}while(choose<1 || choose>4);
		switch(choose){
		case 1:
			cout<<"Заполните массив:"<<endl;
			for(i=1;i<=10;i++){cout<<"vals["<<i<<"]=";
			cin>>vals[i];}
			cout<<"Массив заполнен!!!"<<endl;
			break;
		case 2:
			int w;
			cout<<"Выбирите как будем искать нужный элемент"<<endl;
			do{
			cout<<"1.Искать по индексу"<<endl;
			cout<<"2.Искать по значению"<<endl;
			cin>>w;
			if(w<1 || w>2)cout<<"Неправильный выбор.Повторите еще раз"<<endl;
			}while(w<1 || w>2);
			switch(w){
			case 1:
				int a;
				do{cout<<"Введите нужный индекс:";
				cin>>a;
				cout<<"Вот значение этого элемента:"<<search(a)<<endl;
				}while(a<1 ||a>10);
				cout<<"Теперь измените элемент массива"<<endl;
				change(a);
			break;
			case 2:
				cout<<"Введите нужное значение:";
				int res, b;
				cin>>res;
				cout<<res<<" Равен vals["<<searchres(res)<<"]"<<endl;
				b=searchres(res);
				cout<<"Теперь меняем элемент массива"<<endl;
				change(b);
			break;
			}
			break;
		case 3:
			cout<<"Просмотр массива"<<endl;
			for(i=1;i<=10;i++) cout<<"vals["<<i<<"]="<<vals[i]<<endl;
			cout<<"Просмотр завершен!!!"<<endl;
			break;
		case 4:
			cout<<"Программа массива с изменяемыми элементами завершена."<<endl;
		}
	}while(choose!=4);
	system("pause");
	return 0;
}
int search(int i){
	if(i>=1 && i<=10) return vals[i];
	else cout<<"Неправильный индекс"<<endl;
}
int searchres(int res){
	for(int i=1;i<=10;i++){if (vals[i]==res) return i;}
	cout<<"В массиве нет такого значения"<<endl;
}
void change(int i){
	cout<<"Введите новое значение для vals["<<i<<"]:"<<endl;
	cin>>vals[i];
}