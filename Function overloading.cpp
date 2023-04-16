//   Fuction overloading example

#include<iostream>
using namespace std;
int calc(int);
int calc(int,int);
int main(){
	int s,a,b;
	cout<<"Enter a number: ";
	cin>>s;
	cout<<"The square of "<<s<<" is "<<calc(s)<<endl;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	cout<<"Sum of "<<a<<" and "<<b<<" is "<<calc(a,b);
	
	return 0;
}
int calc(int x){
	return(x*x);
}
int calc(int x, int y){
	return (x+y);
}
