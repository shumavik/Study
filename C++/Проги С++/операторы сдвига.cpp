#include <iostream>
using namespace std;
void disp_binary(unsigned u);
int main()
{
	int i=1,t;
	for(t=0;t<8;t++){
		disp_binary(i);
		i=i<<1;
	}
	cout<<endl;
	for(t=0;t<8;t++){
		disp_binary(i);
		i=i>>1;
	}
	system("pause");
	return 0;
}
void disp_binary(unsigned u){
	register int t;
	for(t=128;t>0;t=t/2)
		if (u&t) cout<<"1";
		else cout<<"0";
	cout<<"\n";
}