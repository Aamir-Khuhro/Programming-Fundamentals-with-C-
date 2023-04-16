#include<iostream>
using namespace std;
int main(){
	int i=1;
	do{
		cout<<i<<" ";
		i++;
	}
	while(i<6);
	
	
	
	int number,sum=0;
	cout<<"\n";
	cin>>number;
	do{
		sum+=number;
		cin>>number;
	}
	while(number>0);
	cout<<"Sum of positive numbers only is : "<<sum;
	return 0;
}
