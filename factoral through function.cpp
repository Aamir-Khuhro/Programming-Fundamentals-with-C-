#include<iostream>
using namespace std;
int factorial(int);
int main(){
	//This program will find the factorial of a number
	cout<<"Enter a number to find it's factorial: ";
	int no,fact;
	cin>>no;
	fact=factorial(no);
	return 0;
}
int square(int x){
	int sum=0,product=1;
	for(int i=1;i<=x;i++){
		sum*=i;
	}
	return(sum);
}
