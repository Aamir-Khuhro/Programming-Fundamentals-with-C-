#include<iostream>
using namespace std;
int main(){
	
	int a1[]={3,45,53,66,75};
	
	//Printing out the array components with their indices
	for(int i=0;i<5;i++){
		cout<<"Index "<<i<<" :"<<a1[i]<<endl;
	}
	cout<<endl;
	
	
	//Reversing assignation of array elements
	for(int j=4;j>=0;j++){
		a1[j]=a1[4-j];
		cout<<"Index "<<(4-j)<<" :"<<a1[j-4]<<endl;
	}

return 0;
}
