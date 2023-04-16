#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Terms : ";
cin>>num;
int last=0,next=1,sum=0;

int i=0;
	while(i<num){
		cout<<next<<" ";
//		last=next;
//		next+=last;
		int sum=last+next;
		last=next;
		next=sum;
		i++;
	}
	return 0;
}

//exit();
//int i=0;
//	while(i<num){
//		cout<<next<<" ";
//		last=next;
////		next+=last;
//		int sum=last+next;
//		next=sum;
//		i++;
//	}


