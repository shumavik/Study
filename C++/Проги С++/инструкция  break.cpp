#include <iostream>
using namespace std;
int main()
{
	int t,count;
	for(t=0;t<100;t++){
		count=0;
		for(;;){
			cout<<"count "<<count<<endl;
			count++;
			if(count==2) break ;
		}
		cout<<endl;
	}
system("pause");
return 0;
}