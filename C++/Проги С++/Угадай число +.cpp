#include <iostream>
#include <cstdlib>
using namespace std;
void play(int m);
int health;
int main()
{	
	int magic,option;
	magic=rand();
	do {
		 cout<<"1.sgenerirovat novoe chislo "<<endl;
		 cout<<"2.Play the game "<<endl;
		 cout<<"3.Ustanovit gizn "<<endl;
		 cout<<"4.Exit the game "<<endl;
		 do{
	cout<<"Please choice option "<<endl;
	cin>>option;
		 }while(option<1 || option>4); 
		switch(option){
		case 1:
				magic=rand();
				cout<<"Chislo sgeneriravanno"<<endl;
				break;
		case 2:
				play(magic);
				break;
		case 3:
				cout<<"Skolko xochehc gizney ";
				cin>>health;
				break;
		case 4:
				cout<<"Goodbay"<<endl;;
				break;
		}
	}while(option!=4);
	system("pause");
	return 0;
}
	void play(int m){

				int t,x,pd=0;
				if (health ==0) { cout<<"Please ustanovite gizn"<<endl;return ; }
				for(t=0;t<health;t++){	
						if (pd==health/2) 
							{cout<<"podskazka ";
							if (x<m) cout<< " tvoe chislo menshe primerno v "<<m/x<<" raz "<<endl ;
							else cout <<"tvoe chislo bolshe primerno v "<<x/m<<" raz "<<endl ; 
						
						}
						cout<<"vvedite vashe chislo ";
						cin>>x;
						
					if (x==m) {cout <<"You WIN!!!"<<endl;
					return;
				}
					else if  (x<m){ cout <<"Malovato"<<endl;pd++;
					}
					else {cout<<"Mnogovato"<<endl;pd++;}
	}
				cout<<"You lose.Please try again "<<endl;
	}
