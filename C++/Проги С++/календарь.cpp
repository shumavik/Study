#include <iostream>
using namespace std;
void funct();
int main()
{
	int x;
	cout<<"please enter the month ";
	cin>>x;
	switch(x) {
	case 1:
		cout<<"january      31 days"<<endl;break;
	case 2:
		cout<<"february      29 days"<<endl;break;
	case 3:
		cout<<"march      31 days"<<endl;break;
	case 4:
		cout<<"april      30 days"<<endl;break;
	case 5:
		cout<<"may      31 days"<<endl;break;
	case 6:
		cout<<"june      30 days"<<endl;break;
	case 7:
		cout<<"jule      31 days"<<endl;break;
	case 8:
		cout<<"august      31 days"<<endl;break;
	case 9:
		cout<<"september     30 days"<<endl;break;
		
	case 10:
		cout<<"october      31 days"<<endl;break;
	case 11:
		cout<<"november     30 days"<<endl;break;
		break;
	case 12:
		cout<<"december      31 days"<<endl;
		break;
	default:
		for(x=0;((((((((((x!=1 && x!=2) && x!=3) && x!=4) && x!=5) && x!=6) && x!=7) && x!=8) && x!=9) && x!=10) && x!=11) && x!=12; )
	{		cout<<"Please enter month again ";
		cin>>x;
		switch(x) {
	case 1:
		cout<<"january      31 days"<<endl;break;
	case 2:
		cout<<"february      29 days"<<endl;break;
	case 3:
		cout<<"march      31 days"<<endl;break;
	case 4:
		cout<<"april      30 days"<<endl;break;
	case 5:
		cout<<"may      31 days"<<endl;break;
	case 6:
		cout<<"june      30 days"<<endl;break;
	case 7:
		cout<<"jule      31 days"<<endl;break;
	case 8:
		cout<<"august      31 days"<<endl;break;
	case 9:
		cout<<"september     30 days"<<endl;break;
		
	case 10:
		cout<<"october      31 days"<<endl;break;
	case 11:
		cout<<"november     30 days"<<endl;break;
	case 12:
		cout<<"december      31 days"<<endl;break;
		break;
		}
	}
	}
funct();
system("pause");
return 0;
}


void funct(){
	int vitchet,month,days;
		cout<<"Enter month ";
		cin>>month;

	cout<<endl<<"enter days ";
	cin>>days;
	
		if (month==1) vitchet=31*7+30*4+29-days;
		else if(month==2) vitchet=31*6+30*4+29-days; 
		else if(month==3) vitchet=31*6+30*4-days;
		else if(month==4) vitchet=31*5+30*4-days;
		else if(month==5) vitchet=31*5+30*3-days;
		else if(month==6) vitchet=31*4+30*3-days;
		else if(month==7) vitchet=31*4+30*2-days;
		else if(month==8) vitchet=31*3+30*2-days;
		else if(month==9) vitchet=31*2+30*2-days;
		else if(month==10) vitchet=31*2+30*1-days;
		else if(month==11) vitchet=31*1+30*1-days;
		else  vitchet=31-days;
	
	cout<<"ostalos "<<vitchet<<" days "<<endl;

}












