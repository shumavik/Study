#include <iostream>
using namespace std;
int main()
{	
	int nums[10];
	int size;
	int t,a,b,x;
	size=10;
	for (t=0;t<size;t++){
		cout<<"Please enter element of massiv ";
		cin>>x;
		nums[t]=x;
	}
	cout<<endl;
	for (t=0;t<size;t++) cout<<"nums["<<t<<"]="<<nums[t]<<endl;
	for (a=1;a<size;a++)
		for(b=size-1;b>=a;b--){
			if( nums[b-1]<nums[b]){	
				t=nums[b-1];
			nums[b-1]=nums[b];
			nums[b]=t;
		}
		}
	cout<<"otsortirovanniy massiv "<<endl;
	for(t=0;t<size;t++) cout<<"nums["<<t<<"]="<<nums[t]<<endl;
	system("pause");
	return 0;
}