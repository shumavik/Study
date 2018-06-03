#include <iostream>
using namespace std;
int main()
{	int choice;
	cout<<"Sprafka po temam "<<endl<<endl;
	cout<<"1.matematika "<<endl;
	cout<<"2.physica "<<endl;
	cout<<"3.history "<<endl;
	cin>>choice;
	switch(choice) {
	case 1 :
		cout<<"matematika interesting subject \n";
		break;
	case 2:
		cout<<"physica fantastic things \n";
		break;
	case 3:
		cout<<"history xalyava \n";
		break;
	default :
			for(choice=0;((choice!=1 && choice!=2) && choice!=3); ){
		cout<<"Sorry!!Please enter 1 or 2 or 3 "<<endl;
		cin>>choice;
		switch(choice) {
	case 1 :
		cout<<"matematika interesting subject \n";
		break;
	case 2:
		cout<<"physica fantastic things \n";
		break;
	case 3:
		cout<<"history xalyava \n";
		break;

	}
			}
	}
	system("pause");
	return 0;



}