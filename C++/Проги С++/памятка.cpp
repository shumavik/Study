#include <iostream>
#include <cstring>
using namespace std;
char *logic[] [2]={
	"����������","������� ����������:\n0*0=0\n1*0=0\n0*1=0\n1*1=1\n",
	"����������","������� ����������:\n0*0=0\n1*0=1\n0*1=1\n1*1=1\n",
	"��","������� ����������:\n0=1\n1=0\n",
	"����������","������� ����������:\n0*0=1\n1*0=0\n0*1=1\n1*1=1\n",
	"���������������","������� ����������:\n0*0=1\n1*0=0\n0*1=0\n1*1=1\n",
	"",""
};
int main()
{	setlocale(LC_CTYPE,"Russian");
	char str[120];
	int i;
	cout<<"������� ���������� ��������:";
	cin>>str;
	for(i=0;*logic[i][0];i++)
		if(!strcmp(logic[i][0],str))
			cout<<logic[i][1];
	system("pause");
	return 0;
}