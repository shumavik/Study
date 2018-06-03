#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
char *fortuna[]={
	"Ñ×ÀÑÒÜÅ\n",
	"ÇÄÎĞÎÂÜÅ\n",
	"ËŞÁÎÂÜ\n",
	"ÒÛ ÂÅËÈÊÈÉ ÏĞÎÃĞÀÌÌÈÑÒ ÑÈ++\n"
};
int main()
{
	setlocale(LC_CTYPE,"Russian");
	int choose;
	cout<<"Òÿïíè êíîïêó è óçíàåøü ñóäüáó:";
	while(!kbhit())rand();
	cout<<endl;
	choose=rand();
	choose=choose%5;
	cout<<fortuna[choose];
	system("pause");
	return 0;
}