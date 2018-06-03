#include <iostream>
using namespace std;
int &put(int i);
int get(int i);
int vals[10];
int error=-1;
int main()
{	setlocale(LC_CTYPE,"Russian");
	put(0)=10;
	put(1)=20;
	put(3)=30;
	put(5)=40;
	cout<<get(0)<<endl;
	cout<<get(1)<<endl;
	cout<<get(3)<<endl;
	cout<<get(5)<<endl;
	put(12)=18;
	system("pause");
	return 0;
}
int &put(int i){
	if(i>=0 && i<10) return vals[i];
	else {
		cout<<"Ошибка.Выход за границу массива\n";
			return error;
	}
}
int get(int i){
	if(i>=0 &&i<10) return vals[i];
	else{cout<<"Ошибка.Выход за границу массива\n";
			return error;
	}
}