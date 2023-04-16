#include<iostream>
using namespace std;
int main(){

int primes[10];
cout<<"Enter numbers: \n";
for(int i=0;i<10;i++){
	cin>>primes[i];
	cout<<endl;
}
cout<<"Numbers in reverse order: \n";
for(int j=9;j>=0;j--){
	cout<<primes[j]<<endl;
}
	return 0;
}
