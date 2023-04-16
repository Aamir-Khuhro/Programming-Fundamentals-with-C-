#include<iostream>
using namespace std;
int main(){
	int number,in,product=1;
	cout<<"How many numbers do you have: ";
	cin>>number;
	if(number<0){
		cout<<"Sorry, you have entered invalid input.";
	}
	else if(number == 0){
		cout<<"Ops, no numbers to testify.";
	}
	
	if(number>0){
		for(int i=1;i<=number;i++){
			cout<<"Pleace enter a number_"<<i<<" :";
			cin>>in;
			cout<<endl;
		}
	}
	return 0;
}
