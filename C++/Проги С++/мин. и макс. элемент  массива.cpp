#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main()
{
	int i,min,max;
	int list[10];
	for(i=0;i<10;i++) list[i]=rand();
	for(i=0;i<10;i++) cout<<"list["<<i<<"]="<<list[i]<<endl;
	while( !kbhit()){};
	min=list[0];
	for(i=1;i<10;i++)
			if(min>list[i]) min=list[i];
	max=list[0];
	for(i=1;i<10;i++)
	if (max<list[i]) max=list[i];
		cout<<"Minimum= "<<min<<endl;
		cout<<"Maximum= "<<max<<endl;
	system("pause");
	return 0;
}