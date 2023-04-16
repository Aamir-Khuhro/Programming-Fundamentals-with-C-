//Generate a geometric series 1,2,4,8,16, , , , n.
// logic  a=1; r=2; n form user  Tn=ar^(n-1)
#include<iostream>
using namespace std;
int main(){
	cout<<"Input Number: ";
	int no,prod=1;
	cin>>no;
	for(int i=1;i<=no;i++){
		int p=i-1;
		cout<<2^p;
	}
	
	return 0;
}
