#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
char check;
cout<<"Enter a character: ";
cin>>check;
if(islower(check)){
	cout<<"It is lowercase..."<<endl;
}
else{
	cout<<"It is uppercase...."<<endl;
}


int n1=2147483647;  // Maximum range of integer
cout<<n1<<endl;
cout<<n1+1<<endl;
cout<<n1+2<<endl;
cout<<"Product: "<<n1*n1<<endl;

int n2=-2147483648;  // Minimum range of integer
cout<<n2<<endl;
cout<<n2-2<<endl;
cout<<"Product: "<<n2*n2<<endl;


return 0;
}

