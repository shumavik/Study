#include <iostream>
using namespace std;
int divnozero();
int main(){
	setlocale(LC_CTYPE,"Russian");
	int i,j,res;
	cout<<"������� ������� � ��������:";
	cin>>i>>j;
	res=j?i/j:divnozero();
	cout<<"���������:"<<res<<endl;
	system("pause");
	return 0;
}
int divnozero(){
	cout<<"������� �� ����!!!"<<endl;
	return 0;
}