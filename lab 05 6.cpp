#include<iostream>
using namespace std;
int main(){
	int no;
	cout<<"Enter a positive number: ";
	cin>>no;
	do{
		cin>>no;
		if(no<1){
			cout<<"Wrong input...";
		}
		else{
			if(no%2==0){
				cout<<no/2;
			}
			else{
				cout<<no*3;
			}
		}
	}
	while(no!=1);
	cout<<no;
	
	return 0;
}
