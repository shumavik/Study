#include <iostream>
using namespace std;
void sqr(int *n,int sq);
void cube(int *n,int cu);
int main()
{	setlocale(LC_CTYPE,"Russian");
	int i, choose;
	int numsq[10],numsc[10];
	do{do{
		cout<<"��� ����� ������?"<<endl;
		cout<<"1.��������� � �������"<<endl;
		cout<<"2.��������� � ���"<<endl;
		cout<<"3.�����"<<endl;
		cout<<"��� �����"<<endl;
		cin>>choose;
		if(choose<1||choose>3) cout<<"������������ ����.���������� �����."<<endl;
	}while(choose<1||choose>3);
	switch(choose){
	case 1:
		cout<<"���������:"<<endl;
		for(i=0;i<10;++i) numsq[i]=i+1;
		sqr(numsq,10);
		for(i=0;i<10;++i) cout<<"numsq["<<i<<"]="<<numsq[i]<<endl;
		break;
	case 2:
		cout<<"�������"<<endl;
		for(i=0;i<10;++i) numsc[i]=i+1;
		cube(numsc,10);
		for(i=0;i<10;++i) cout<<"numsc["<<i<<"]="<<numsc[i]<<endl;
		break;
	case 3:
		cout<<"����������"<<endl;
		break;
	}
	}while(choose!=3);
	system("pause");
	return 0;
}
void sqr(int *n,int sq){
	while(sq){
		*n=*n**n;
		sq--;
		n++;
	}
}
void cube(int *n,int cu){
	while(cu){
		*n=*n**n**n;
		cu--;
		n++;
	}
}
