/*
In this program we are going perform the basic opertions 
on the two numbers taken as input form user with the help 
of fuctions user defined functions



*/


#include<iostream>
using namespace std;
void add(int,int);
int main(){
	string opt;
	do{
	
	int a,b;
	cout<<"Value of no1: ";
	cin>>a;
	cout<<"Value of no2: ";
	cin>>b;	
	add(a,b);
	cout<<"Do you want to continue? (yes/no)?";
	cin>>opt;
	}
	while(opt=="yes");
	
	return 0;
}


void add(int x,int y){
	int c;
	c=x+y;
	cout<<"The sum of numbers is "<<c<<endl;
	int d;
	d=x*y;
	cout<<"The product of numbers is "<<d<<endl;
	int e;
	e=x/y;
	cout<<"The division of numbers is "<<e<<endl;
	int f;
	f=x-y;
	cout<<"The subtraction of numbers is "<<f<<endl;
	int g;
	g=x%y;
	cout<<"The mod of numbers is "<<g<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
}







