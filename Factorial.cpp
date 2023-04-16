#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Factorial of number: ";
	cin>>n;
	int factorial=1;
	for(int n;n>=1;n--){  
		factorial*=n;
	}
	cout<<factorial;
	
	
//	An integer can't be decleared twice	
	
	
	
	
	
//	BUG ALERT

/*

int factorial=1;
	for(int n;n<=1;n--){   WHEN YOU INPUT n=5; n<=1 CONDITIONS BECOMES FALSE
						   Here int n is error because int n is already decleared 
						   and no need to declear again. Just assign a value
		factorial*=n;
	}
	cout<<factorial;



*/
	
	return 0;
}
