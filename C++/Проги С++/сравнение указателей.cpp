#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"Russian");
	int num[10];
	int *start,*end;
	start=num;
	end=&num[9];
	while(start<=end)
	{
		cout<<"¬ведите число:";
		cin>>*start;
		start++;
	}
	start=num;
	while(start<=end)
	{
		cout<<*start<<endl;
		start++;
	}
	system("pause");
	return 0;
}