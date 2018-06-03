#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
	int i,t;
	char text[100] [80];
	for (t=0;t<100;t++){
		cout<<t<<": ";
		gets(text[t]);
		if(!text[t] [0]) break;
	}
	for(i=0;i<t;i++) cout<<text[i]<<endl;
	system("pause");
	return 0;
}