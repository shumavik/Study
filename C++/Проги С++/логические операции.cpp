#include <iostream>
using namespace std;
bool xor(bool a,bool b);
bool impl(bool a,bool b);
bool acwi(bool a,bool b);
int main()
{
	bool p,q;
	cout<<"enter p(0 or 1) ";
	cin>>p;
	cout<<endl<<"enter q(0 or 1) ";
	cin>>q;
	cout <<"p and q= "<<(p&&q)<<endl;
	cout <<"p or q= "<<(p||q)<<endl;
	cout<<"p xor q= "<<xor(p,q)<<endl;
	cout<<"p implicatcya q= "<<impl(p,q)<<endl;
	cout<<"p acwifalentcya q= "<<acwi(p,q)<<endl;
	system("pause");
	return 0;
}

	bool xor(bool a,bool b){
		return (a||b)&& !(a&&b);
	}
	bool impl(bool a,bool b){
		return !a||b;
	}
	bool acwi(bool a,bool b){
		return !a&&!b||a&&b;
	}