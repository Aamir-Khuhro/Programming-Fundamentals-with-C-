#include<iostream>
using namespace std;
int main(){
	
	cout<<"NO: ";
	int no,fact=1;
	cin>>no;
	cout<<no<<"!= ";
	for(int i=no;i>=1;i--){
		fact*=i;
		cout<<i;
		if(i>1){
			cout<<" x ";
		}
	}
	cout<<" = "<<fact;
	
	return 0;
}
