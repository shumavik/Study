#include <iostream>
using namespace std;
void clrscr(int size=25);
int main(){
	int i;
	for(i=0;i<30;i++) cout<<i<<endl;
	clrscr();
	for(i=0;i<30;i++) cout<<i<<endl;
	clrscr(10);
	system("pause");
	return 0;
}
void clrscr(int size){
	for(;size;size--) cout<<endl;
}