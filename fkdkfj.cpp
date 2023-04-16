#include<iostream>
using namespace std;
int main(){
cout<<"Rows : ";
int num;
cin>>num;
for(int i=1;i<=num;i++){
	for(int j=1;j<=num;j++){
		if(j>=num+1-i && (num+1-i)%2!=0){
			cout<<"*";
		}
		else{
			cout<<" ";
		}
	}
	cout<<endl;
}


return 0;
}
