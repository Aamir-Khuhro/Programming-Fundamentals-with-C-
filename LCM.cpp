#include<iostream>
using namespace std;
int main(){
int no1,no2;
cout<<"NO1 : ";
cin>>no1;
cout<<"NO2 : ";
cin>>no2;
int one,two,i;
for(one=no1, i=1, two=no2 ; one!=two ; one=one*++i, two=two*++i){
		cout<<"LCM = "<<one<<endl;
//		break;  You're asking for break and thinking why is loop iterating for once...hahahahahhahhahahah...
	}



return 0;
}

