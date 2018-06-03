#include <iostream>
using namespace std;
int count;
void funct1();
void funct2();
int main()
{
	int i;
	for(i=0;i<=10;i++){
		count=i*2;
		funct1();
	}
	system("pause");
	return 0;
}
void funct1(){
	cout<<"count: "<<count<<endl;
	funct2();
}
void funct2(){

	int count;
	for(count=0;count<3;count++) cout<<".";
}