#include<iostream>
using namespace std;
int main(){
	int upper,lower;
	cout<<"Lower Range: ";
	cin>>lower;
	cout<<"Upper Range: ";
	cin>>upper;
	cout<<"Primes "<<lower<<":"<<upper<<"  ";
	if(upper>lower){
		for(int i=lower;i<=upper;i++){
			int count=0;
			for(int j=1;j<=i;j++){
				if(i%j==0){
					count++;
				}
			}
			if(count==2){
				cout<<i<<" ";
			}
		}
	}
	else{
		cout<<"Invalid Input...";
	}
	return 0;
}
