#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter the size of array: ";
cin>>num;
int arr[num];
for(int i=0;i<num;i++)
	cin>>arr[i];
for(int i=0;i<num;i++){
	for(int j=(i+1);j<num;j++){
		if(arr[i]==arr[j]){
			cout<<arr[i]<<" ";
		}
	}
}

return 0;
}

