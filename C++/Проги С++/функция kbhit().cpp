#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i;
	for(i=0;!kbhit();i++)
		cout<<i<<endl;
	system("pause");
	return 0;

}