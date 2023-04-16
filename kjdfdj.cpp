#include<iostream>
using namespace std;
int main(){
for(int i=1;i<=5;i++){
	for(int j=1;j<=9;j++){
			int num;
		if(j>=-2*i+11) {
			  if(j>=(-2*i+12)/2){
			  	cout<<num++;
			  }
			  else{
			  	int k=i;
			  	cout<<k--;
			  }
		}
		else cout<<" ";
	}
	
	cout<<endl;
}


return 0;
}

