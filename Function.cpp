#include<iostream>
using namespace std;
int sqr(int);
int main(){
	
	cout<<"We are in main fuction\n";
	int a;
	cout<<"Enter a number: ";
	cin>>a;
	int count=0;
	for(int i=1;i<=a;i++){
		if(a%i==0){
			count++;
		}
	}
	if(count==2){
		sqr(a);
	}
	else{
		cout<<"Try again: ";
		cin>>a;
		}
	return 0;
}
int add(int x){
	int c=(x*x);
	return c;
}
