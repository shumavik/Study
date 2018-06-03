#include <iostream>
using namespace std;
int main()
{	int nums[10];
	char ch;
	int i;
	cout<<sizeof ch<<endl;
	cout<<sizeof i<<endl;
	cout<<sizeof (float)<<endl;
	cout<<sizeof (double)<<endl;
	cout<<sizeof nums<<endl;
	for(int i=0;i<10;i++) nums[i]=(double)nums[i];
	cout<<sizeof nums<<endl;
	system("pause");
	return 0;
}