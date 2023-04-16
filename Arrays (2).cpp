#include<iostream>
using namespace std;
void pro(int l[],int m[], int n[]){
	cout<<"Array 01 = {";
	for(int i=0;i<5;i++){
		n[i]=m[i]*l[i];
		cout<<l[i];
		if(i!=4){
			cout<<",";
		}
		
	}
	cout<<"}";
	int k=2;
	while(k<4){
		cout<<endl<<"Array 0"<<k<<" = {";
		for(int i=0;i<5;i++){
			if(k==2) cout<<m[i];
			else     cout<<n[i]; 
			if(i!=4){
				cout<<",";
			}
		}
		cout<<"}";
		++k;
	}
}
int main(){
int a[]={1,2,3,4,5};
int b[]={5,4,3,2,1};
int c[]={0,0,0,0,0};
pro(a,b,c);


return 0;
}

