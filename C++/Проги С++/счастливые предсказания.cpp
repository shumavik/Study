#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
char *fortuna[]={
	"�������\n",
	"��������\n",
	"������\n",
	"�� ������� ����������� ��++\n"
};
int main()
{
	setlocale(LC_CTYPE,"Russian");
	int choose;
	cout<<"����� ������ � ������� ������:";
	while(!kbhit())rand();
	cout<<endl;
	choose=rand();
	choose=choose%5;
	cout<<fortuna[choose];
	system("pause");
	return 0;
}