#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int magic,guess;
	magic=rand();
	cout<<"Please enter your number: ";
	cin>>guess;
	if (guess==magic){ cout<<endl<<"It's true "<<endl;
						cout<<"the random number= "<<magic<<endl;
	}
	else {cout<<endl<<"OH no!!You LOSE "<<endl;
	if(guess>magic){ cout<<"You number= "<<guess<<" > random number "<<endl;}
	else cout<<"You number= "<<guess<<" < random number "<<endl;
	}
	system("pause");
	return 0;
}