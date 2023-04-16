#include<iostream>
using namespace std;
int main(){
	cout<<"****** Storing Values in array memory locaton ******"<<endl<<endl;
	cout<<"Numbers to type: ";
	int n;
	int j;
	cin>>n;
	double a1[n];
	for(int i=0;i<n;i++){
		cout<<"Index "<<i<<" :";
		cin>>a1[i];

	}
	cout<<endl;
	for(int i=n-1;i>=0;i--){
		cout<<"Index "<<i<<" :"<<a1[i]<<endl;
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		j=n-i-1;
		a1[j]=a1[i];
		cout<<"Index "<<j<<" :"<<a1[j]<<endl;
	}
	cout<<endl;
	for(int j=0;j<n;j++){
		cout<<"Index "<<j<<" :"<<a1[j]<<endl;
	}
	
	return 0;
}
