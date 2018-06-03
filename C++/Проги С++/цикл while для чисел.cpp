#include <iostream>
using namespace std;
int main()
{
int  a;
	cout<<"a= ";
	cin>>a;
	if(a>100){
		for(a=0;!a<100; ){cout <<"a= ";cin>>a;
		if(a<=100) break;
		}
	}
	while (a<=100) {
 
		cout<<a<<endl;
		a++;
	}

system("pause");
return 0;

}