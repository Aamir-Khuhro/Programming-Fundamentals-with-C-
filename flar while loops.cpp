/*     1. Counter-controlled while loop
		2. Sentinel-controlled while loop
		 3. Flag-controlled while loop
		 
	   1. Sequential structure
	    2. Selection structure
	     3. Repitation structure

*/


#include<iostream>
using namespace std;
int main(){
	int num,sum=0;
	bool flag=true;
	while(flag){
		cout<<"How much did you score..: ";
		cin>>num;
		if(num>0){
			sum+=num;
		}
		else{
			cout<<"Ooops... Game Finished";
			flag=false;
		}
	}
	cout<<endl<<"Score "<<sum;
	return 0;
}
