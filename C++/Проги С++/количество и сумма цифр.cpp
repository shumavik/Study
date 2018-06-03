#include <iostream>
using namespace std;
int main()
{
	int x,sum=0,i,n,b=0;
	cout<<"KAKOE CHISLO ";
	cin>>n;
	cout<<endl<<"Sckolko cifr ";
	cin>>x;
	for(i=1;i<=x;i++){
		sum=sum+n%10;
		b=b*10+n%10;
		n=n/10;
	}
	for(i=1;i<=x;i++){
		cout<<b%10<<endl;
		b=b/10;

	}
		
	cout<<"summa cifr= "<<sum<<endl;
	system("pause");

return 0;

}