#include<iostream>
using namespace std;
int main(){
unsigned int numb;
unsigned long fact=1;
cout<<"Enter a number: ";
cin>>numb;
for(int i=numb;i>=1;i--){
	fact*=i;
}
cout<<"Factorial is "<<fact<<endl;



/*

Now I can if a number exceeds 12 the output will
come but it would be wrong because it will get
out of the range of unsigned long int 
fact value will overflow....

"Multiple initialization and Test Expressions
There can be multiple initialize statements and multiple updation 
statements but only one condition expression in for loops..

*/

return 0;
}

