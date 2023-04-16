#include<iostream>
using namespace std;
int main(){
	cout<<"Enter size and store values: ";
	int num;
	cin>>num;
	int bucky[num];
	
	for(int i=0;i<num;++i)
	{
		cout<<"Input "<<i+1<<" : ";
		cin>>bucky[i];
	}
	
	cout<<"\nValues stored in array: ";
	for(int i=0;i<num;++i)
	{
		cout<<bucky[i]<<" ";
	}
	
	int sum=0,aver;
	for(int i=0;i<num;i++)
	{
		sum+=bucky[i];
	}
	cout<<"\nSum: "<<sum<<endl;
	cout<<"Average: "<<float(sum/num)<<endl;
	cout<<"Odd values in the array: ";
	for(int i=0;i<num;++i)
	{
		if(bucky[i]%2!=0){
			cout<<bucky[i]<<" ";
		}
	}
	
	cout<<"\nEven values in the array: ";
	for(int i=0;i<num;++i)
	{
		if(bucky[i]%2==0){
			cout<<bucky[i]<<" ";
		}
	}
	
	cout<<"\nValues on odd indices: ";
	for(int i=0;i<num;++i)
	{
		if(i%2!=0){
			cout<<bucky[i]<<" ";
		}
	}
	
	cout<<"\nValues on Even indices: ";
	for(int i=0;i<num;++i)
	{
		if(i%2==0){
			cout<<bucky[i]<<" ";
		}
	}
	
	cout<<"\nEnter value to check wether it's present in array or not: ";
	int no,check;
	cin>>no;
	for(int i=0;i<num;++i)
	{
		if(no==bucky[i]){
			check=1;
		}
	}
	
	int count=0;
	for(int i=0;i<num;++i)
	{
		if(no<bucky[i]){
			count++;
		}
	}
	if(check==1) cout<<"Present in array...."<<endl;
	else cout<<"Not present in array......"<<endl;
	cout<<"There are "<<count<<" numbers greater than "<<no<<" in the array..."<<" and these are: "<<endl;
	for(int i=0;i<num;++i)
	{
		if(no<bucky[i]){
			cout<<bucky[i]<<" ";
		}
	}
	return 0;
}
