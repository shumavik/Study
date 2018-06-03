#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
using namespace std;
const int size=100;
struct inv{
	char item[40];
	double cost;
	double retail;
	int onhand;
	int leadtime;
}invtry[size];
void enter(),init_list(),display();
void search(),delet();
void update(),input(int i);
int menu();
int main()
{
	setlocale(LC_CTYPE,"Russian");
	char choise;
	init_list();
	for(;;){
		choise=menu();
		switch(choise){
		case 'e':enter();
			break;
		case 'd':display();
			break;
		case 's':search();
			break;
		case 'u':update();
			break;
		case'b':delet();
		case 'q':return 0;
		}
	}
	system("pause");
}
void init_list(){
	int t;
	for(t=0;t<size;t++) *invtry[t].item='\0';
}
int menu(){
	char ch;
	cout<<endl;
	do{
		cout<<"(E)nter"<<endl;
		cout<<"(D)isplay"<<endl;
		cout<<"(S)erch"<<endl;
		cout<<"(U)pdate"<<endl;
		cout<<"(B)delete"<<endl;
		cout<<"(Q)uit"<<endl;
		cout<<"Выберите команду"<<endl;
		cin>>ch;
	}while(!strchr("edsubq",tolower(ch)));
return tolower(ch);
}
void enter(){
	int i;
	for(i=0;i<size;i++) 
		if (! *invtry[i].item) break;
	if(i==size){
		cout<<"Список полон"<<endl;
		return ;
	}
	input(i);
}
void input(int i){
	cout<<"Товар: ";
	cin>>invtry[i].item;
	cout<<"Стоимость: ";
	cin>>invtry[i].cost;
	cout<<"Розничная цена: ";
	cin>>invtry[i].retail;
	cout<<"В наличии: ";
	cin>>invtry[i].onhand;
	cout<<"Время до пополнения запасов(в днях): ";
	cin>>invtry[i].leadtime;
}
void update(){
	int i;
	char name[80];
	cout<<"Введите наименование товара:";
	cin>>name;
	for(i=0;i<size;i++)
		if(!strcmp(name,invtry[i].item))break;
	if(i==size){
		cout<<"Товар не найден"<<endl;
		return;
	}
	cout<<"Введите новую информацию"<<endl;
	input(i);
}
void display(){
	int t;
	for(t=0;t<size;t++){
		if(*invtry[t].item){
			cout<<invtry[t].item<<endl;
			cout<<"Стоимость: RU"<<invtry[t].cost;
			cout<<"\nВ розницу: RU";
			cout<<invtry[t].retail<<endl;
			cout<<"В наличии:"<<invtry[t].onhand;
			cout<<"\nДо пополнения осталось: ";
			cout<<invtry[t].leadtime<<"дней\n\n";
		}
	}
}
void search(){
	char name[80];int i;
	cout<<"Введите название товара:";
	cin>>name;
	for(i=0;i<size;i++) if(!strcmp(name,invtry[i].item)) {cout<<"Наименование товара:"<<invtry[i].item<<endl;
	cout<<"Стоимость товара:"<<invtry[i].cost<<endl;
	cout<<"Розничная цена:"<<invtry[i].retail<<endl;
	cout<<"В наличии:"<<invtry[i].onhand<<endl;
	cout<<"Число дней до поплнения:"<<invtry[i].leadtime<<endl;

	return;}
	if(i==size) cout<<"Ничего не найдено";
}
void delet(){
	char name[80];
	int i;
	cout<<"Введите название товара,которое хочете удалить:";
	cin>>name;
	for(i=0;i<size;i++) if(!strcmp(name,invtry[i].item)) {cout<<"Удаление"<<endl;
		*invtry[i].item='0';
		invtry[i].cost=0;
		invtry[i].leadtime=0;
		invtry[i].onhand=0;
		invtry[i].retail=0;
		return;
	}
	if(i==size) cout<<"Информация о товаре отсутствует"<<endl;
}