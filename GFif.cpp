#include<iostream>
using namespace std;
int main(){
int num;
cout<<"How many terms do you want in Fibannoci Series ? ";
cin>>num;
int last=0, next=1, sum=0, i=0;
cout<<last<<" ";
while(i<num-1){
	cout<<next<<" ";
	int sum=last+next;
	last=next;
	next=sum;
	i++;
}


return 0;
}

