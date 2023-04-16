#include<iostream>
using namespace std;
int main(){
	int no1,no2;
	int sum=0;
	cout<<"Enter min and max: ";
	do
	{
		cin>>no1;
		cin>>no2;
		for(int i=no1;i<=no2;i++){
			sum+=no1;
		}
	}
	while(no1<no2);
	
	
	
	
	
	return 0;
}
