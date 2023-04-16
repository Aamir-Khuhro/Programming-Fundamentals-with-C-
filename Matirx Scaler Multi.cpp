#include<iostream>
using namespace std;
int main(){
	int arr[10];

	cout<<"================================"<<endl;
	cout<<"       Matrix A - Original "<<endl;
	cout<<"================================"<<endl;
	int matrix[4][3];
	for(int i=0;i<4;i++){
		cout<<"      ";
		for(int j=0;j<3;j++){
			cin>>matrix[i][j];
		}
	
	}
	cout<<"================================"<<endl;
	cout<<"       Matrix A - Divided by 5 "<<endl;
	cout<<"================================"<<endl;	
	for(int i=0;i<4;i++){
		cout<<"      ";
		for(int j=0;j<3;j++){
			cout<<(matrix[i][j])/5<<" ";
		}
		cout<<endl;
	}
	return 0;
}
