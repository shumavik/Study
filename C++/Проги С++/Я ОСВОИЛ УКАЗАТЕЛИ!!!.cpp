#include <iostream>
#include <cmath>
using namespace std;
void mypow(int a,int *nums);
int main()
{	setlocale(LC_CTYPE,"Russian");
	int i,j;int *p;
	int nums[10];
	for(i=0;i<10;i++) nums[i]=i+1;
	for(i=0;i<10;i++) cout<<"nums["<<i+1<<"]="<<nums[i]<<endl;
	p=nums;
	for(i=0;i<10;i++) {cout<<*p**p<<endl;*p++; }
	cout<<"*****\n*****\n";
	p=nums;
	for(i=0;i<10;i++) {cout<<*p**p**p<<endl;*p++; }
	cout<<"*****\n*****\n";
	cout<<"А теперь сам выбери в какую степень возводить:";
	cin>>j;
	mypow(j,nums);
	system("pause");
	return 0;
}
void mypow(int a,int *nums){
	int i;int num[10];int *q;
	for(i=0;i<10;i++) num[i]=i+1;
	if (a==0){for(i=0;i<10;i++){ num[i]=1;
	cout<<"nums["<<i+1<<"]="<<num[i]<<endl;
	}
	return ;
	}
	for(int j=0;j<a-1;j++){q=nums;
		for(i=0;i<10;i++){
			num[i]=num[i]**q;
			*q++;
		}
	}
	cout<<"Вот значения твоей степени:\n";
	for(i=0;i<10;i++) cout<<"nums["<<i+1<<"]="<<num[i]<<endl;
}