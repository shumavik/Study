#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int magic,guess;
	magic=rand();
	do {
		cout<<"Please enter your variant number ";
			cin>>guess;
		if (guess==magic) {
			cout<<"it's true!!!YOU WIN!!!\n";
			cout<<"random number= "<<magic<<endl;
		}
		else {
			cout<<"SORRY!!!YOU LOSE\n";
			if (guess>magic) cout<<"Your number bolzhe random number"<<endl;
			else cout<<"Your number menzhe random number"<<endl;
		}
	}while (guess!= magic);
system("pause");
return 0;
}