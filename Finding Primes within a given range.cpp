#include<iostream>
using namespace std;
int main(){
	int start, end;
	cout<<"start: ";
	cin>>start;
	cout<<"end: ";
	cin>>end;
	cout << "Prime numbers between " << start << "-" << end << " are: "<<endl;
	for(int i=start;i<=end;i++){
		int count=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==2){
			cout<<i<<endl;
		}
	}
	
	return 0;
}
