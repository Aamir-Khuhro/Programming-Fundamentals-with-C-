#include<iostream>
using namespace std;
int main(){
	int start,end;
	cout<<"Starting number: ";
	cin>>start;
	cout<<"Ending number: ";
	cin>>end;
	for(int i=start;i<=end;i++){
		int check=0;
		for(int j=1;j<=i;j++){
			if(i%j==0)  check++;
		}
		if(check!=2){
			cout<<i<<" ";
		}
	}
	return 0;
}
