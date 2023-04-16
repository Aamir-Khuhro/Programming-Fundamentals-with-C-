#include<iostream>
using namespace std;
void mergeList(int a[], int b[], int c[]){
	for(int i=0;i<8;i++){
		if(i<5) 
		{
			c[i]=a[i];
		}
		else if(i>4){
			c[i]=b[i];
		}
		
	}
}
		
int main(){
	int arr1[]={3,6,36,-6,34};
	int arr2[]={5,34,1};
	int arr3[8]={};
	mergeList(arr1,arr2,arr3);
	for(int i=0;i<8;i++){
		cout<<arr3[i]<<" ";
	}
	return 0;
}
