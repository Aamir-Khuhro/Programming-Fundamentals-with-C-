#include<iostream>
using namespace std;
main(){
	cout<<"Enter 7 NOs"<<endl;
	float arr[7];
	float lar,sma;
	for(int i=0;i<7;i++){
		cout<<"\nno "<<i+1<<":";
		cin>>arr[i];
	}
	for(int i=0;i<7;i++){
		if(arr[i]>=lar) lar=arr[i];
		if(arr[i]<=sma)	sma=arr[i];
	}
	cout<<"Smallset: "<<sma<<endl;
	cout<<"Largest: "<<lar<<endl;
	return 0;
}
