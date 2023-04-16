#include<iostream>
using namespace std;
int main(){
	int a1[]={3,6,34,64};
	int a2[]={34,64,64,672,6,1,4,6};
	int a3[12];
	for(int i=0;i<4;i++){
		a3[i]=a1[i];
	}
	for(int i=4;i<12;i++){
		a3[i]=a2[i-4];
	}
	cout<<"Array 01: ";
	for(int i=0;i<4;i++){
		cout<<a1[i]<<" ";
	}
	cout<<endl;
	cout<<"Array 02: ";
	for(int i=0;i<7;i++){
		cout<<a1[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Array 03: ";
	for(int i=0;i<12;i++){
		cout<<a1[i]<<" ";
	}
	system("PAUSE");
	return 0;
}
