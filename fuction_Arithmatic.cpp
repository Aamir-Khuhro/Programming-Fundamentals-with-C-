#include<iostream>
using namespace std;
void arthimatic(int,int);
int main(){
	int a,b;
	cout<<"Enter any two numbers: \n";
	cout<<"NO 1: ";
	cin>>a;
	cout<<"NO 2: ";
	cin>>b;
	arthimatic(a,b);
	return 0;
}

void arthimatic(int x,int y){
	cout<<"Sum of two numbers: ";
	cout<<x+y<<endl;
	cout<<"Product of two numbers: ";
	cout<<x*y<<endl;
	cout<<"Differece of two numbers: ";
	cout<<x-y<<endl;
	cout<<"Divisio of two numbers: ";
	cout<<x/y<<endl;
	}
