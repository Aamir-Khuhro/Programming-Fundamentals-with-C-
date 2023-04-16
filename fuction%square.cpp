//Take integer type and return integer value in fuction
//Say that we want to find the square of a number
#include<iostream>
using namespace std;
int square(int);
int main(){
		int no,ans;
		cout<<"No: ";
		cin>>no;
		ans=square(no);
		cout<<"The square of No: "<<ans;
}
int square(int x){
	return(x*x);
}
