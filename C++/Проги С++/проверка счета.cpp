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
		do{	cout<<"1.��������\n";
		cout<<"2.���������\n";
		cout<<"3.���������\n";
		cout<<"4.�������\n";
		cout<<"5.�������� ���������� ������ �������\n";
		cout<<"6.����� �� ���������\n";
		cout<<"�������� ���������� ��� �����:"<<endl;
		cin>>choose;
	}while(choose<1||choose>6);
	switch(choose){
		case 1:
				cout<<"������� ��� ����� � ������� �����"<<endl;
				plus();
				break;
		case 2:
				cout<<"������� � ������� �����"<<endl;
				minus();
				break;
		case 3:
				cout<<"������� ������������ ���� �����"<<endl;
				pro();
				break;
		case 4:
				cout<<"�������"<<endl;
				del();
				break;
		case 5:
				cout<<"\n�������� ������ ������\n";
				num_right=0;
				break;
		case 6:
				cout<<"���� ����������:"<<endl;
				cout<<"������ �������:"<<num_right;
				cout<<"\n�������� �������:"<<allanswers-num_right;
				cout<<"\n���� ������,�� ������ ��?\n�� ������ �������!!!\n";
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
			cout<<"������� �����"<<a<<"+"<<b<<"?";
			cin>>ans;
			if (ans==a+b){
				cout<<"���������!!\n";
				num_right++;
				allanswers++;return;}
			else {cout<<"\n�����������\n";allanswers++; }}
			cout<<"�� ������������ ��� ���� �������."<<endl;	
			cout<<"���������� ����� �����:"<<a+b<<endl;
			}	

void minus(){
	int count;
		int a,b,ans;
		a=rand()%100;
		b=rand()%100;
		for(count=0;count<3;count++){
			cout<<"������� �����"<<a<<"-"<<b<<"?";
			cin>>ans;
			if (ans==a-b){
				cout<<"���������!!\n";
				num_right++;
				allanswers++;return;}
			else {cout<<"\n�����������\n";allanswers++; }}
			cout<<"�� ������������ ��� ���� �������."<<endl;	
			cout<<"���������� ����� �����:"<<a-b<<endl;
			}	

void pro(){
	int count;
		int a,b,ans;
		a=rand()%100;
		b=rand()%100;
		for(count=0;count<3;count++){
			cout<<"������� �����"<<a<<"*"<<b<<"?";
			cin>>ans;
			if (ans==a*b){
				cout<<"���������!!\n";
				num_right++;
				allanswers++;return;}
			else {cout<<"\n�����������\n";allanswers++; }}
			cout<<"�� ������������ ��� ���� �������."<<endl;	
			cout<<"���������� ����� �����:"<<a*b<<endl;
			}	

void del(){
	int count;
		int a,b,ans;
		a=rand()%100;
		b=rand()%100;
		for(count=0;count<3;count++){
			cout<<"������� �����(������� ����� �����)"<<a<<"/"<<b<<"?";
			cin>>ans;
			if (b==0) {a=rand()%100;
		b=rand()%100;}
			if (ans==a/b){
				cout<<"���������!!\n";
				num_right++;
				allanswers++;return;}
			else {cout<<"\n�����������\n";allanswers++; }}
			cout<<"�� ������������ ��� ���� �������."<<endl;	
			cout<<"���������� ����� �����:"<<a/b<<endl;
			}
