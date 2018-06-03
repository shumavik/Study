#include <iostream>
using namespace std;
int main()
{	setlocale(LC_CTYPE,"Russian");
	int x,k=1,sum=0;
	cout<<"¬ведите число:"<<endl;
	cin>>x;
	sum=x%10;
	if(x/10==0)cout<<sum<<endl;
	else {
	while(x/10>0){
		x=x/10;
		k++;
			}sum=sum+x;
	cout<<k<<endl;
	cout<<sum<<endl;}
	system("pause");
	return 0;
}