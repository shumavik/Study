#include <iostream>
using namespace std;
int main()
{	
	int t,i,massiv[2] [5];
	for(t=0;t<2;++t) {
		for(i=0;i<5;++i) { 
			cin>>massiv[t] [i];
	}cout<<endl;
	}
	for(t=0;t<2;t++) {
		for(i=0;i<5;i++) cout<<"massiv["<<t<<"]["<<i<<"]="<<massiv[t] [i]<<"  ";
	cout<<endl;
	}
	system("pause");
	return 0;
}