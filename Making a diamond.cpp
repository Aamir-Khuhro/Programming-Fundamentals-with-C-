#include<iostream>
using namespace std;
int main(){
cout<<"How many rows do you want in pyramid: ";
int rows;
cin>>rows;   //5 
for(int i=0;i<rows;i++){  
	for(int j=1;j<=(2*rows-1);j++){
		if(j>=rows-i && j<=rows+1)
		cout<<"*";
		else
		cout<<" ";
	}
	cout<<endl;
}


return 0;
}

