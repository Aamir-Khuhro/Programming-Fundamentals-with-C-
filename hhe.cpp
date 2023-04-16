// 1/1+1/2+1/3+....+1/n/
#include<iostream>
using namespace std;
int main(){
int num;
cout<<"terms : ";
cin>>num;
double sum=0;
for(int i=1;i<=num;i++){
	sum=sum+1.0/i;
}
cout<<"Sum is "<<sum<<endl;

return 0;
}

