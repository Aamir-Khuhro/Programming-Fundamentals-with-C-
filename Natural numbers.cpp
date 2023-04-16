#include<iostream>
using namespace std;
int main(){
	cout<<"Quantity: ";
	int no,arr,sum=0;
	cin>>no;
	cout<<"The numbers upto "<<no<<"th term are:"<<endl;
	for(int i=0;i<no;i++){
		cout<<i+1<<" ";
		sum+=(i+1);
	}
	cout<<"\nThe sum of natural numbers is: "<<sum;
	
	return 0;
}
