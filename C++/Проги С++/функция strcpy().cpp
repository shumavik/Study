#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
	char str[80];
	char res[80];
	cout<<"It s str "<<endl;
	gets(str);
	strcpy(res,str);
	cout<<endl<<"a its res"<<res<<endl;
	system("pause");
	return 0;
}