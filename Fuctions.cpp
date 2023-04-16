#include<iostream>
using namespace std;
int max(int,int);
int main(){
	int a,b,c;
	a=34,b=63;
	c=max(a,b);
	cout<<"Max is: "<<c;     //Control Transfer
	
	return 0;
}
int max(int x, int y){
	if(x>y)
	return x;
	else
	return y;
}
