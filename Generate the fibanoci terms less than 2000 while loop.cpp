#include<iostream>
using namespace std;
int main(){
int last=0,next=1;
while(next<2000){
	cout<<next<<" ";
	int sum=last+next;
	last=next;
	next=sum;
}


return 0;
}

