//Lest prime occur before the number
#include<iostream>
using namespace std;
int main(){
	int no;
	cout<<"Enter num: "	;
	cin>>no;
	for(int i=no;i>=2;i--){
		int count=0;
		for(int j=1;j<=i;j++)	{
			if(i%j==0){
				count++;
			}
		}
		if(count==2){
			cout<<i<<" ";
		}
		
	}
	
	return 0;
}
