#include <iostream>
using namespace std;
int main(){
int x,sum=0;
cout<<"enter any number to find whether number is a prime or not\n";
cin>>x;
for(int i=1;i<=x;i++){
	if(x%i==0)
	sum++;
}
if(sum==2)
cout<<"prime number\n";
else
cout<<"not prime number\n";
return 0;
}
