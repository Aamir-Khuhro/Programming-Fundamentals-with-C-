#include<iostream>
using namespace std;
int main(){
	int a1[7];
	cout<<"Array 1: "<<endl;
	for(int i=0;i<7;i++){
		cout<<"Value "<<i+1<<" : ";
		cin>>a1[i];
		cout<<endl;
	}
	 
	int a2[7];
	cout<<"Array 2: "<<endl;
	for(int i=0;i<7;i++){
		cout<<"Value "<<i+1<<" : ";
		cin>>a2[i];
		cout<<endl;
	} 
	
	int count;
	for(int i=0;i<7;i++){
		if(a1[i]==a2[i]){
			count++;
		}
		
	}
	if(count==7) cout<<"\nTwo arrays are equal.....";
	else		 cout<<"\nTwo arrays are not equal.....";
	return 0;
}
