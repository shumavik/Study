#include <iostream>
using namespace std;
int main()
{
	int x;
	for(x=0;x<6;x++){

		if (x==1) cout <<"x=1"<<endl;
		else	if (x==2) cout <<"x=2"<<endl;
		else	if (x==3) cout <<"x=3"<<endl;
		else	if (x==4) cout <<"x=4"<<endl;
		else cout <<"x <> 1 and 4"<<endl;

	}
	system("pause");
	return 0;
}