#include <iostream>
using namespace std;
struct play{
	char name[30];
	int x;
	int y;
}t;
int main()
{	
	setlocale(LC_CTYPE,"Russian");
	cout<<"¬ведите им€ игрока:";
	cin>>t.name;
	cout<<t.name<<endl;
	t.x=10;
	t.y=20;
	cout<<"x="<<t.x<<endl;
	cout<<"y="<<t.y<<endl;
	system("pause");
	return 0;
}