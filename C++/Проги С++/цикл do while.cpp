#include <iostream>
using namespace std;
int main()
{
	int num;

	do{
		cout<<"enter  0<num<101  for exit ";
		cin>>num;
	}while (num>100);
	while(num<=100 && num>=0) {
		cout<<"num= "<<num<<endl;
		num--;
	}
	system("pause");
	return 0;

}