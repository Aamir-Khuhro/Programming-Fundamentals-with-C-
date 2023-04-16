#include<iostream>
using namespace std;
int main(){
	int sum=0,aver;
	int arr[]={23,43,645,34,32,53,523,43};
	for(int i=0;i<8;++i)
	{
		sum+=arr[i];
		
	}
	cout<<"Sum: "<<sum<<endl;
	cout<<"Aver: "<<(float)sum/8<<endl;
	
	
	
	cout<<"Enter size of array: ";
	int no;
	cin>>no;
	int arr1[no];
	for(int i=0;i<no;++i){
		cout<<"NO: "<<i+1<<" ";
		cin>>arr1[i];
		cout<<endl;
	}
	arr1[2]=20;
	cout<<"You put the following input:  "<<endl;
	for(int i=0;i<no;++i){
		cout<<arr1[i]<<" ";
	
	}
	cout<<"\n5th element of the array: "<<arr1[4]<<endl;
//	cout<<endl<<cout<<"5th element of the array: "<<arr1[4]<<endl;
//	cout<<"2nd element of the array: "<<cout<<endl<<arr1[1];
	
	
	
	
	
	cout<<"Printing odd values stored in the array: "<<endl;
	for(int i=0;i<no;++i)
	{
		if(arr1[i]%2==1){
			cout<<arr[i]<<" ";
		}
	}
	
	cout<<"Printing  values on odd indices stored in the array: "<<endl;
	for(int i=0;i<no;++i)
	{
		if(i%2==1){
			cout<<arr[i]<<" ";
		}
	}
	
	return 0;
}
