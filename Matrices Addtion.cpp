//Addition of two matrices
#include<iostream>
using namespace std;
int main(){
	int matrix1[2][2];
	int matrix2[2][2];
	cout<<"      MATRIX - A"<<endl;
	cout<<"Entry a11: ";
	cin>>matrix1[0][0];
	cout<<"Entry a12: ";
	cin>>matrix1[0][1];
	cout<<"Entry a21: ";
	cin>>matrix1[1][0];
	cout<<"Entry a22: ";
	cin>>matrix1[1][1];
	cout<<endl;
	cout<<"      MATRIX - B"<<endl;
	cout<<"Entry a11: ";
	cin>>matrix2[0][0];
	cout<<"Entry a12: ";
	cin>>matrix2[0][1];
	cout<<"Entry a21: ";
	cin>>matrix2[1][0];
	cout<<"Entry a22: ";
	cin>>matrix2[1][1];
	
	cout<<"\nC=A+B"<<endl;
	cout<<"MATRIX - C"<<endl;
	cout<<"Entry a11:"<<matrix2[0][0]+matrix1[0][0]<<endl;
	cout<<"Entry a11:"<<matrix2[0][1]+matrix1[0][1]<<endl;
	cout<<"Entry a11:"<<matrix2[1][0]+matrix1[1][0]<<endl;
	cout<<"Entry a11:"<<matrix2[1][1]+matrix1[1][1]<<endl;
	
	cout<<endl<<endl<<"Now with loops: "<<endl;
	int m1[2][2], m2[2][2], m3[2][2];
	cout<<"      MATRIX - A"<<endl;
	for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			cout<<"Enter a"<<i+1<<j+1<<" : ";
			cin>>m1[i][j];
		}
	}
	cout<<endl;
	cout<<"      MATRIX - B"<<endl;
	for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			cout<<"Enter b"<<i+1<<j+1<<" : ";
			cin>>m2[i][j];
		}
	}
	cout<<endl;
	
	cout<<"      MATRIX - C"<<endl;
	for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			m3[i][j]=m1[i][j]+m2[i][j];
			cout<<"c"<<i+1<<j+1<<" : "<<m3[i][j]<<endl;
		}
	}
	return 0;
}
