// The name of a fuction and variable can't be same
// The "x" should not be decleared again after the argument while function definition
#include<iostream>
using namespace std;
int sqr(int);
int main(){
	cout<<"Enter a number: ";
	int no,sq;
	cin>>no;
	sq=sqr(no);
	cout<<sq;
	
	
	
	return 0;
}
int sqr(int x){
	int res=x*x;
	return(res);
}
