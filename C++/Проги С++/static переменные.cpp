#include <iostream>
#include <cmath>
using namespace std;
double srq(int i);
int avg(int i);
int main()
{setlocale(LC_CTYPE,"Russian");
	int num;
		do{
			cout<<"������� �����"<<endl;
			cout<<"-1 �����"<<endl;
			cin>>num;
			if(num!=-1){cout<<"������� ������� �������� ������:"<<avg(num)<<endl;
			cout<<"������� ������� ������������� ������:"<<srq(num);}
			cout<<endl;
		}while(num>-1);
			system("pause");
		return 0;
}
int avg(int i){
	static int sum=0,count=0;
	sum=sum+i;
	count++;
	return sum/count;
}
double srq(int i){
	static double gar=1;
	gar=sqrt(gar)*sqrt((double) i);
	return gar;
}