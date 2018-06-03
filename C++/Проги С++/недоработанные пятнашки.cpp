#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
void menu();
void game();
void set(int number);
void up(int i,int j),down(int i,int j),right(int i,int j),left(int i,int j);
int A [3] [3]={(char)' ',1,8,
	7,5,3,
	4,2,6,
};
int num,i,j;
int main(){
	setlocale(LC_CTYPE,"Russian");
menu();
system("pause");
return 0;
}
void menu(){
	int choose;
	do{
	do{
	cout<<"1.Запустить игру"<<endl;
	cout<<"2.Выход"<<endl;
	cout<<"Выбирете опцию"<<endl;
	cin>>choose;
	}while(choose<1 && choose>2);
	switch(choose){
	case 1:
		game();
		break;
	case 2:
		cout<<"Увидимся позже"<<endl;
	}
	}while(choose!=2);
}
void game(){
	int i,j;
	cout<<"-1 значит пустая клетка"<<endl;
	do{ for(i=0;i<3;i++){
	for(j=0;j<3;j++) cout<<A[i] [j]<<"  ";
	cout<<endl;
	}
	cout<<"Какое число и куда его будем двигать?"<<endl;
		cin>>num;
		set(num);
	}while(((((((((A [1] [1]!=1) && A [1] [2]!=2) && A [1] [3]!=3) && A [2] [1]!=4) && A [2] [2]!=5) && A [2] [3]!=6) && A [3] [1]!=7) && A [3] [2]!=8 )&& A [3] [3]!=9);
}
void set(int number){
	for(i=0;i<3;i++)
	for(j=0;j<3;j++) {if(A[i][j]==number){
		int a,b;
		a=i;b=j;
		int option;
		do{
		cout<<"Куда будем двигать число:"<<endl;
		cout<<"1.вверх"<<endl;
		cout<<"2.вниз"<<endl;
		cout<<"3.вправо"<<endl;
		cout<<"4.влево"<<endl;
		cin>>option;
	}while(option<1 && option>>4);
		switch(option){
		case 1:
			up(a,b);
			break;
		case 2:
			down(a,b);
			break;
		case 3: 
			right(a,b);
			break;
		case 4:
			left(a,b);
			break;
		}
	}
	else {cout<<"Такого числа нет"<<endl;return ;}}
}
void up(int i,int j)
{	
	int t;
	if (i==1) {cout<<"Вверх нельзя"<<endl;return ;}
	t=A[i-1] [j];
	A[i-1][j]=A[i][j];
	A[i][j]=t;
}
void down(int i,int j){
	int t;
	if(i=3){
		cout<<"Вниз нельзя"<<endl;return ;
	}
	t=A[i+1][j];
	A[i+1][j]=A[i][j];
	A[i][j]=t;
}
void right(int i,int j){
	int t;
	if(j=3){
		cout<<"Вправо нельзя"<<endl;
		return ;
	}
	t=A[i][j+1];
	A[i][j+1]=A[i][j];
	A[i][j]=t;
}
void left(int i,int j){
	int t;
	if(j=1){
		cout<<"Влево нельзя"<<endl;
		return;
	}
	t=A[i][j-1];
	A[i][j-1]=A[i][j];
	A[i][j]=t;
}