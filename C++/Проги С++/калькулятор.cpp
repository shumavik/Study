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
				cout<<"6.���������� ������ \n";
				cout<<"7.����� �� ������������\n";
				cout<<"�������� �����:";
				cin>>choose;
			}while(choose<1||choose>7);
			switch(choose){
			case 1:
				cout<<"��������"<<endl;
				cout<<"������ �����:";
				cin>>x;
				cout<<"������ �����:";
				cin>>y;
				cout<<"���������:"<<x+y<<endl;
				break;
			case 2:
				cout<<"���������"<<endl;
				cout<<"������ �����:";
				cin>>x;
				cout<<"������ �����:";
				cin>>y;
				cout<<"���������:"<<x-y<<endl;
				break;
			case 3:
				cout<<"���������"<<endl;
				cout<<"������ �����:";
				cin>>x;
				cout<<"������ �����:";
				cin>>y;
				cout<<"���������:"<<x*y<<endl;
				break;
			case 4:
				cout<<"�������"<<endl;
				double a,b;
				cout<<"������ �����:";
				cin>>a;
				cout<<"������ �����:";
				cin>>b;
				cout<<"���������:"<<a/b<<endl;
				break;
			case 5:double q,r;
				cout<<"�������"<<endl;
				cout<<"���������:";
				cin>>q;
				cout<<"����������:";
				cin>>r;
				cout<<"���������:"<<pow(q,r)<<endl;
				break;
			case 6:
				double z;
				cout<<"���������� ������"<<endl;
				cout<<"������� �����:";
				cin>>z;
				cout<<"���������:"<<sqrt(z)<<endl;
				break;
			case 7:
				cout<<"����������"<<endl;
			}
		}while(choose!=7);
		system("pause");
		return 0;
}