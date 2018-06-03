#include <iostream>
#include <cstdlib>
using namespace std;
void play(int m);
int main()
{
	int option;
	int magic;
	magic=rand();
	do {
		cout<<"1. Poluchit novoe chislo"<<endl;
		cout<<"2. Play the game"<<endl;
		cout<<"3. Exit program"<<endl;
			do {
					cout<<"PLease enter your choice"<<endl;
					cin>>option;
			}while (option<1 ||option>3);
			switch(option) {
			case 1:
				magic=rand();
			break;
			case 2:
				play(magic);
			break;
			case 3:
				cout<<"Goodbay"<<endl;
			break;
			}
	}while(option !=3);
	system("pause");
	return 0;
}
void play(int m){
	int t,x;
	for (t=0;t<50;t++) {
		cout<<"Enter your random number   "<<endl;
		cin>>x;
		if (x==m) {
			cout<<"It's True you WIN!!!"<<endl;;
			return;
		}
		else if (x<m) cout<<"Malovato \n";
		else cout <<"Mnogovato"<<endl;
	}
	cout<<"Your health = 0."<<endl;
		cout<<"Try play again"<<endl;
}