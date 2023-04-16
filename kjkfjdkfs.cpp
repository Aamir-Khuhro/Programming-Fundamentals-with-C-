#include<iostream>
using namespace std;
int main(){
	int sum=0,terms;
	cout<<"No of terms in series: ";
	cin>>terms;
	for(int i=1;i<=terms;i++){
		for(int j=1;j<=i;j++){
			sum+=j;
		}
		cout<<sum<<" ";
	}
	
	cout<<endl;
	for(int i=1;i<=terms;i++){
		int sum=0;
		for(int j=1;j<=i;j++){
			sum+=j;
		}
		cout<<sum<<" ";
	}
	return 0;
}
