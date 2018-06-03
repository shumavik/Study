#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{	setlocale(LC_CTYPE,"Russian");
	char str[80];
	int i;
	gets(str);
	i=atoi(str);
	int j=atof(str);
	cout<<i<<endl<<j<<endl;
	system("pause");
	return 0;
}