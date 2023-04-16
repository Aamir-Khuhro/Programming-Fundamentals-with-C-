#include<iostream>
using namespace std;
int main(){
	cout<<"kdjkd"<<endl;
	int a=4, b=7;
	a+=b;
	b=a-b;
	a=a-b;
	cout<<"a = "<<a<<" b = "<<b<<endl;
int num;
cin>>num;
int arr[num];
for(int i=0;i<num;i++){
	cin>>arr[i];
}
	for(int i=0;i<num-1;i++){
		for(int j=i+1;j<num;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
for(int i=0;i<num;i++){
	cout<<arr[i]<<" ";
}
}
