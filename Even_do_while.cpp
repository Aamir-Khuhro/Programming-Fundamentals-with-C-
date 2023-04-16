#include<iostream>
using namespace std;
int main(){
	char gen;
	do{
		int a;
		cout<<"Enter any number: ";
		cin>>a;
		if(a%2==0){
			cout<<"Number is even.\n";
		}
		else{
			cout<<"Number is odd\n";
		}
		cout<<"Do you want to continue?";
		cin>>gen;
	}
	while(gen == 'y');
	
}
