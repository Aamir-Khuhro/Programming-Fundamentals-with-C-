#include<iostream>
using namespace std;
int main(){
	int no,max,min;
	for(int i=1;i<=5;i++){
		cout<<"Feed "<<i<<": ";
		cin>>no;
		if(i==1){
			max=no;
			min=no;
		}
		else{
			if(no>max){
				max=no;
			}
			else if(no<min){
				min=no;
			}
		}
	}
	cout<<"MAX: "<<max<<endl;
	cout<<"MIN: "<<min<<endl;
	return 0;
}
