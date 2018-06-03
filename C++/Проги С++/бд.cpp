#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
void enter();
void report();
int menu();
	char name[4][80];
	char phone[4][80];
	int hours [4];
	int wage[4];
	
	int main()
	{   int choice;
	do{
		choice=menu();
		switch(choice){
		case 0:break;
		case 1:enter();
			break;
		case 2:
			report();
			break;
		default: cout<<"Please try again"<<endl<<endl;
		}
	}while(choice!=0);
	system("pause");
	return 0;
}

	int menu()
	{
		int choice;
		cout<<"0.Exit program"<<endl;
		cout<<"1.Enter information"<<endl;
		cout<<"2.Report"<<endl;
		cout<<"choose option"<<endl;
		cin>>choice;
		return choice ;
	}
	void enter(){
		int i;
		char temp[80];
		for(i=0;i<4;i++){
			cout<<"Enter family"<<endl;
			cin>>name[i];
			cout<<"enter number of phone"<<endl;
			cin>>phone[i];
			cout<<"enter kol-vo time"<<endl;
			cin>>hours[i];
			cout<<"enter oklad"<<endl;
			cin>>wage[i];
		}
	}
	
	void report(){
	int i;
	for(i=0;i<4;i++)
	{
		cout<<name[i]<<"  "<<phone[i]<<endl;
		cout<<"Zarplata za week "<<wage[i]*hours[i]<<endl;
	}
}
