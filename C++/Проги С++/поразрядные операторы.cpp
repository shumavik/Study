#include <iostream>
using namespace std;
void disp_binary(unsigned u);
int main(){
	setlocale(LC_CTYPE,"Russian");
	unsigned i;
	cout<<"������� ����� ����� 0 � 255:"<<endl;
	cin>>i;
	cout<<"�������� ����� � �������� ����:";
	disp_binary(i);
	cout<<"�������������� ���:";
	disp_binary(~i);
	system("pause");
	return 0;
}
void disp_binary(unsigned u){
	register int t;
	for(t=128;t>0;t=t/2)
		if (u&t) cout<<"1";
		else cout<<"0";
		cout<<endl;
}