#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
double c(int a,int b);
struct player{
	 int speed;
	 int x;
	 int y;
	 char name[20];
}player;
int main(){
	setlocale(LC_CTYPE,"Russian");
	cout<<"Введите имя игрока:";
	cin>>player.name;
	player.speed=10;
	cout<<"Введите координату"<<endl;
	cout<<"По OX:";
	cin>>player.x;
	cout<<"По OY:";
	cin>>player.y;
	cout<<"Расстояние пройденное по"<<endl;
	cout<<"OX:"<<player.speed*player.x<<endl;
	cout<<"OY:"<<player.speed*player.y<<endl;
	cout<<"Перемещение "<<strcat(player.name,"a")<<" равно:"<<c(player.x,player.y)<<endl;
	system("pause");
	return 0;
}
double c(int a,int b){
	return sqrt(pow((double)a,2)+pow((double)b,2));
}