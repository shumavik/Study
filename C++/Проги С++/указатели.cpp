#include <iostream>
using namespace std;
int main()
{
	int balance;
	setlocale(LC_CTYPE,"Russian");
	int*bal;
	int val;
	balance=3200;
	bal=&balance;
	val=*bal;
	cout<<"������ �����: "<<val<<endl;
	system("pause");
	return 0;
}