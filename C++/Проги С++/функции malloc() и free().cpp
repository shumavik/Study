#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{	setlocale(LC_CTYPE,"Russian");
	int *i;
	double *j;
	i=(int *)malloc(sizeof(int));
	if(!i){
		cout<<"Выделить память не удалось"<<endl;
		return 1;
	}
	j=(double *) malloc(sizeof(double));
	if(!j){
		cout<<"Выделить память не удалось"<<endl;
		return 1;
	}
	*i=10;
	*j=100.123;
	cout<<*i<<endl<<*j<<endl;
	free(i);
	free(j);
	system("pause");
	return 0;
}