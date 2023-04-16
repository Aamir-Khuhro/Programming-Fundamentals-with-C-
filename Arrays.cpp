#include<iostream>
using namespace std;
int main(){
	cout<<"=============================="<<endl;
	cout<<"Matrix - Original"<<endl;
    cout<<"=============================="<<endl;
	int a[10];
	for(int i=0;i<10;i++){
		cin>>a[i];
		cout<<" ";
	}
	int b[10];
	for(int j=0;j<10;j++){
		b[j]=a[9-j];
	}
	cout<<"=============================="<<endl;
	cout<<"Matrix - Reverse"<<endl;
    cout<<"=============================="<<endl;
	for(int x=0;x<10;x++){
		cout<<b[x]<<" ";
	}
}
