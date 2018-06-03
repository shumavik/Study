#include <iostream>
using namespace std;
double &change(int i);
double vals[]={1.1,2.2,3.3,4.4,5.5};
int main()
{	setlocale(LC_CTYPE,"Russian");
	int i;
	cout<<"Исходные данные"<<endl;
	for(i=0;i<=5;i++)cout<<"vals["<<i<<"]="<<vals[i]<<endl;
	change(1)=25.4;
	change(5)=777.7;
	cout<<"****************"<<endl;
	for(i=0;i<=5;i++)cout<<"vals["<<i<<"]="<<vals[i]<<endl;
	system("pause");
	return  0;
}
double &change(int i){
	return vals[i];
}