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
		cout<<"�������� �������"<<endl;
		cin>>ch;
	}while(!strchr("edsubq",tolower(ch)));
return tolower(ch);
}
void enter(){
	int i;
	for(i=0;i<size;i++) 
		if (! *invtry[i].item) break;
	if(i==size){
		cout<<"������ �����"<<endl;
		return ;
	}
	input(i);
}
void input(int i){
	cout<<"�����: ";
	cin>>invtry[i].item;
	cout<<"���������: ";
	cin>>invtry[i].cost;
	cout<<"��������� ����: ";
	cin>>invtry[i].retail;
	cout<<"� �������: ";
	cin>>invtry[i].onhand;
	cout<<"����� �� ���������� �������(� ����): ";
	cin>>invtry[i].leadtime;
}
void update(){
	int i;
	char name[80];
	cout<<"������� ������������ ������:";
	cin>>name;
	for(i=0;i<size;i++)
		if(!strcmp(name,invtry[i].item))break;
	if(i==size){
		cout<<"����� �� ������"<<endl;
		return;
	}
	cout<<"������� ����� ����������"<<endl;
	input(i);
}
void display(){
	int t;
	for(t=0;t<size;t++){
		if(*invtry[t].item){
			cout<<invtry[t].item<<endl;
			cout<<"���������: RU"<<invtry[t].cost;
			cout<<"\n� �������: RU";
			cout<<invtry[t].retail<<endl;
			cout<<"� �������:"<<invtry[t].onhand;
			cout<<"\n�� ���������� ��������: ";
			cout<<invtry[t].leadtime<<"����\n\n";
		}
	}
}
void search(){
	char name[80];int i;
	cout<<"������� �������� ������:";
	cin>>name;
	for(i=0;i<size;i++) if(!strcmp(name,invtry[i].item)) {cout<<"������������ ������:"<<invtry[i].item<<endl;
	cout<<"��������� ������:"<<invtry[i].cost<<endl;
	cout<<"��������� ����:"<<invtry[i].retail<<endl;
	cout<<"� �������:"<<invtry[i].onhand<<endl;
	cout<<"����� ���� �� ���������:"<<invtry[i].leadtime<<endl;

	return;}
	if(i==size) cout<<"������ �� �������";
}
void delet(){
	char name[80];
	int i;
	cout<<"������� �������� ������,������� ������ �������:";
	cin>>name;
	for(i=0;i<size;i++) if(!strcmp(name,invtry[i].item)) {cout<<"��������"<<endl;
		*invtry[i].item='0';
		invtry[i].cost=0;
		invtry[i].leadtime=0;
		invtry[i].onhand=0;
		invtry[i].retail=0;
		return;
	}
	if(i==size) cout<<"���������� � ������ �����������"<<endl;
}