#include<iostream>
using namespace std;
int main(){
	int no1,no2,no3;

		cout<<"Enter no1 : ";
		cin>>no1;
		cout<<"Enter no2 : ";
		cin>>no2;
		cout<<"Enter no3 : ";
		cin>>no3;
	if(no1>no2 &&no2>no3){
		cout<<"DEC";
	}
	else if(no1<no2 && no2<no3){
		cout<<"INC";
	}
	else{
		cout<<"Nei";
	}
	
	
	
	return 0;
}
