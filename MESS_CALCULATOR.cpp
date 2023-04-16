#include<iostream>
using namespace std;
int main(){
	//Declearing Variables
	cout<<"\"MESS BILL CALCULATOR\"\n";
	int x , y;
	y = 20*x+500;     /*20x+500 is wrong because we need to specify some
	                     operation between 20 and "x".*/
	cout<<"Enter your units consumed :\n ";            
	cin>>x;
	cout<<"Your total mess bill is ";
	cout<<y;
	return 0;
}
