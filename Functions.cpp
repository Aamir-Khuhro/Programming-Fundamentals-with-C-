#include<iostream>
using namespace std;
int fun(int *x, int *y){
	*x=34,*y=53;
}
int main(){
	int x=75,y=13;
	fun(&x,&y);
	cout<<x<<" "<<y;
	
	
	return 0;
}
