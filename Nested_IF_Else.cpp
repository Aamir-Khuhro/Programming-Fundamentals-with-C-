#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Number of Employs: ";
	cin>>n;
	if(n>100){
		if(n<130){
			if(n%2==0){
				cout<<"There is even number";
			}
			else{
				cout<<"There is odd number of employess";
			}
		}
		else if(n<150){
			if(n>130){
				cout<<"Company will get 150 dollar stipend";
			}
		}
		else{
			cout<<"Contact manager";
		}
	}
	return 0;
}
