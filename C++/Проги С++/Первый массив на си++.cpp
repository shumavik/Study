#include <iostream>
using namespace std;
int main()
{
	int sample[10];
	int t,i;
			for(i=0;i<10;i++) {
					cout<<"vvedite t ";
					cin>>t;
					sample[i]=t;
			}
			for(i=0;i<10;i++) cout<<"sampe["<<i<<"]="<<sample[i]<<endl;
			system("pause");
			return 0;
}