#include<iostream>
using namespace std;
int main(){
	int min,max,sum;
	do{
		cout<<"Enter minimium and maximium vlaue: ";
		cin>>min>>max;
		if(min<max){
			for(int i=min;i<=max;i++){
				sum+=i;
			}
			cout<<"Sum of values from "<<min<<" to "<<max<<" is: "<<sum<<endl;
		}
		else{
			cout<<"Wrong input please try again!.."<<endl;
		}
	}
	while(1);
	
	
	
	
	
	return 0;
}
