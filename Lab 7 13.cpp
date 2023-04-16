#include<iostream>
using namespace std;
void Cal_price(int x, int y,int *toatl);
int main(){
	int a=160,b=120,m=110,p=100,g=130;
	int v,w,x,y,z,toatl,sum=0;
	cout<<"======================================="<<endl;
	cout<<"How many Apples did you buy: ";
	cin>>v;
	cout<<"How many Banana did you buy: ";
	cin>>w;
	cout<<"How many Mango did you buy: ";
	cin>>x;
	cout<<"How many Peach did you buy: ";
	cin>>y;
	cout<<"How many Grpaes did you buy: ";
	cin>>z;
	cout<<"======================================="<<endl;
	Cal_price(v,a,&toatl);
	cout<<"Price for Apple: "<<v<<"*"<<a<<"="<<toatl<<endl; sum=toatl;
	Cal_price(w,b,&toatl);
	cout<<"Price for Banana: "<<w<<"*"<<b<<"="<<toatl<<endl;  sum+=toatl;
	Cal_price(x,m,&toatl);
	cout<<"Price for Mango: "<<x<<"*"<<m<<"="<<toatl<<endl;   sum+=toatl;
	Cal_price(y,p,&toatl);
	cout<<"Price for Peach: "<<y<<"*"<<p<<"="<<toatl<<endl;	  sum+=toatl;
	Cal_price(z,g,&toatl);
	cout<<"Price for Grapes: "<<z<<"*"<<g<<"="<<toatl<<endl;    sum+=toatl;
	cout<<"***************************************"<<endl;
	cout<<"Total Price of your Purchase is: "<<sum<<endl;
	cout<<"***************************************"<<endl;
	return 0;
}
void Cal_price(int x, int y,int *toatl){
	*toatl=x*y;
}
