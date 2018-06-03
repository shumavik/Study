#include <iostream>
using namespace std;
int divnozero();
int main(){
	setlocale(LC_CTYPE,"Russian");
	int i,j,res;
	cout<<"¬ведите делимое и делитель:";
	cin>>i>>j;
	res=j?i/j:divnozero();
	cout<<"–езультат:"<<res<<endl;
	system("pause");
	return 0;
}
int divnozero(){
	cout<<"ƒеление на ноль!!!"<<endl;
	return 0;
}