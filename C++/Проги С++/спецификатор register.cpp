#include <iostream>
#include <ctime>
using namespace std;
unsigned int i;
unsigned int delay;
int main()
{	setlocale(LC_CTYPE,"Russian");
	register unsigned int j;
	long start,end;
	start=clock();
	for(delay=0;delay<50;delay++)
			for(i=0;i<6400000;i++);
	end=clock();
	cout<<"Не register цикл:"<<end-start<<endl;
	for(delay=0;delay<50;delay++)
			for(j=0;j<6400000;j++);
	end=clock();
	cout<<"Register цикл:"<<end-start<<endl;
	system("pause");
	return 0;
}