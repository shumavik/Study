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
			cout<<"1.��������� ������"<<endl;
			cout<<"2.�������� ������� �������"<<endl;
			cout<<"3.����������� ������"<<endl;
			cout<<"4.����� �� ���������"<<endl;
			cout<<"�������� �����:";
			cin>>choose;
			if (choose<1 || choose>4) cout<<"������������ ����.���������� ��� ���."<<endl;
		}while(choose<1 || choose>4);
		switch(choose){
		case 1:
			cout<<"��������� ������:"<<endl;
			for(i=1;i<=10;i++){cout<<"vals["<<i<<"]=";
			cin>>vals[i];}
			cout<<"������ ��������!!!"<<endl;
			break;
		case 2:
			int w;
			cout<<"�������� ��� ����� ������ ������ �������"<<endl;
			do{
			cout<<"1.������ �� �������"<<endl;
			cout<<"2.������ �� ��������"<<endl;
			cin>>w;
			if(w<1 || w>2)cout<<"������������ �����.��������� ��� ���"<<endl;
			}while(w<1 || w>2);
			switch(w){
			case 1:
				int a;
				do{cout<<"������� ������ ������:";
				cin>>a;
				cout<<"��� �������� ����� ��������:"<<search(a)<<endl;
				}while(a<1 ||a>10);
				cout<<"������ �������� ������� �������"<<endl;
				change(a);
			break;
			case 2:
				cout<<"������� ������ ��������:";
				int res, b;
				cin>>res;
				cout<<res<<" ����� vals["<<searchres(res)<<"]"<<endl;
				b=searchres(res);
				cout<<"������ ������ ������� �������"<<endl;
				change(b);
			break;
			}
			break;
		case 3:
			cout<<"�������� �������"<<endl;
			for(i=1;i<=10;i++) cout<<"vals["<<i<<"]="<<vals[i]<<endl;
			cout<<"�������� ��������!!!"<<endl;
			break;
		case 4:
			cout<<"��������� ������� � ����������� ���������� ���������."<<endl;
		}
	}while(choose!=4);
	system("pause");
	return 0;
}
int search(int i){
	if(i>=1 && i<=10) return vals[i];
	else cout<<"������������ ������"<<endl;
}
int searchres(int res){
	for(int i=1;i<=10;i++){if (vals[i]==res) return i;}
	cout<<"� ������� ��� ������ ��������"<<endl;
}
void change(int i){
	cout<<"������� ����� �������� ��� vals["<<i<<"]:"<<endl;
	cin>>vals[i];
}