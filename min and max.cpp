#include <iostream>
using namespace std;
int main (){
	
	int min, max, sum=0;

do{
	
	cout<<"Enter Minimum and Maximum Value :";
	cin>>min>>max;
	
	if(min>max){
		cout<<"Wrong input please try again.\n";
	}
 }while(min>max);
 
  for (int i=min; i<=max; i++){
  	  sum=sum+i;
  }
  cout<<sum<<endl;
	return 0;
}

