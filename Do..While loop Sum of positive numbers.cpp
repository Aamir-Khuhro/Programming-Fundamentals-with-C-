#include<iostream>
using namespace std;
int main(){
	//Sum of positive numbers with the help of 
	//Do...While loop
	float number,sum=0;
do{								//This will work atlest wether the statement is true or false
	sum+=number;
	cout<<"Enter number: ";
	cin>>number;
	
	
}
while(number>0);


cout<<"Sum of positve numbers is "<<sum;
	
	return 0;
}
