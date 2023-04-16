#include<iostream>
using namespace std;
int main(){
	int num=17;
	int count=0;
	for(int i=1;i<=num/2;i++){
		if(num%i==0){
			++count;
		}
	}
	if(num>100) cout<<"Positive number.."<<endl;
	else if(num>10) cout<<"nUmber is > 10"<<endl;
	else if(num%2!=0)  cout<<"number is odd"<<endl;
	else if(count==2) cout<<"number is prime.."<<endl;
	else{
		cout<<"kdjfkdjfkd";
	}
}
