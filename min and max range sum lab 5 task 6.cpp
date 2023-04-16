#include<iostream>
using namespace std;
int main(){
	int min,max;
	int sum=0;
do{	
	cout<<"Enter min and max value : ";
	cin>>min>>max;
	if(min<max){
		for(int i=min;i<=max;i++)
		sum+=i;
		cout<<"Sum of vlaues from "<<min<<" to "<<max<<" is : "<<sum<<endl;
	
	}
	else{
		cout<<"Wrong input please try again."<<endl;
	}
}
while(!sum);


return 0;
}

