#include <iostream>
using namespace std;
int factorial(int n);
int factorialrec(int n);
int main()
{	setlocale(LC_CTYPE,"Russian");
	int x;
	cout<<"������� ������ ����� ��� ��� ����������:";
	cin>>x;
	cout<<"� ������� �����:"<<factorial(x)<<endl;
	cout<<"� ������� ��������:"<<factorialrec(x)<<endl;
	system("pause");
	return 0;
}
int factorial(int n){
	int ans;
	int t;
	ans=1;
	for(t=1;t<=n;t++)ans=ans*t;
	return ans;
}
int factorialrec(int n){
	int ans;
	if(n==1) return(1);
	ans=factorialrec(n-1)*n;
	return (ans);
}