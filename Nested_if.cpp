#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter any integer: ";
	cin>>num;
	if(num != 0){
		if(num % 2== 0){
			cout<<"Number is even\n";
			}
		else{
			cout<<"Number is odd\n";
			}
	}
	else{
		cout<<"The number is niether even nor odd..... It's "
		"neural i.e 0.\n";
	}
	cout<<"This line will get printed.\n";
	return 0;
}
