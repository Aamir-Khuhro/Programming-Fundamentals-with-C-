#include<iostream>
using namespace std;
int main(){

	//HCF Finding ... Concepts: while loop, if ...else, swapping, 
	int num1,num2,HCF,temp;   
	cout<<"NO 1 : ";
	cin>>num1;               //num1=36
	cout<<"NO 2 : ";
	cin>>num2; 				 //num2=28;
	if(num1>=num2){
		if(num1%num2==0) HCF=num2;
		while((num1%num2)!=0){
			temp=num1;   //temp=36
			num1=num2;   //num1=28
			num2=temp%num2;   //num2=8
			if(num1%num2==0){
				HCF=num2;
			}
		
		}
	}
	else if(num2>=num1){     //   36    12
		if(num2%num1==0) HCF=num1;
		while((num2%num1)!=0){
			temp=num2;   //temp=36
			num2=num1;   //num1=28
			num1=temp%num1;   //num2=8
			if(num2%num1==0){
				HCF=num1;
			}
		
		}
	}
	cout<<"HCF : "<<HCF<<endl;

return 0;
}

