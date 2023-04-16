#include<iostream>
using namespace std;
int main(){
int num1,num2,num3;
cout<<"Input 1st number : ";
cin>>num1;
cout<<"Input 2nd number : ";
cin>>num2;
cout<<"Input 3rd number : ";
cin>>num3;


if(num1>=num2 && num2>=num3)      	cout<<"decreasing order...";
else if(num1<=num2 && num2<=num3)   cout<<"increasing order...";
else                                cout<<"Niether increasing nor decreasing...";
return 0;
}

