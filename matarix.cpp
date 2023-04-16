#include<iostream>
using namespace std;
int main(){
	int m1[2][2],m2[2][2],m3[2][2];
	cout<<"   Matrix - A"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<"a"<<i+1<<j+1<<" : ";
			cin>>m1[i][j];
		}
	}
	cout<<"   Matrix - B"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<"b"<<i+1<<j+1<<" : ";
			cin>>m2[i][j];
		}
	}
	
	
	cout<<"   Matrix - C"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			m3[i][j]=m1[i][j]+m2[i][j];
			cout<<"a"<<i+1<<j+1<<" : "<<m3[i][j]<<endl;
		}
	}
	
	return 0;
}
