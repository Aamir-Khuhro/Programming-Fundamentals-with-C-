#include <iostream>
#include <cstring>
using namespace std;
struct Product{
int model_n; long price;
char name[30];};
int main()

{   int user; string input;

cout<<"How many Entries of Product do you have(Enter above 10):\t";cin>>user;
    Product p[user];

 if(user<10){cout<<"\nSorry";}
    else{
        for(int i=1;i<=user;i++)
            {
            cout<<"\n\nInput Product "<<i<<" Name:\t";
            cin.ignore();
            cin.getline(p[i].name,30);
 if(strcmp(p[i].name,"quite")==0){break;}
            cout<<"Input Product "<<i<<" Model Number:\t";
            cin>>p[i].model_n;
            cout<<"Input Product "<<i<<" Price:\t";
            cin>>p[i].price;

            }


//For Displaying information of Products
for(int i=1;i<=user;i++)
        {
    if(strcmp(p[i].name,"quite")==0){break;}
        cout<<"\n\n\nProduct "<<i<<" Details\n";
        cout<<"\nName of Product "<<i<<": "<<p[i].name;
        cout<<"\nModel of Product "<<i<<": "<<p[i].model_n;
        cout<<"\nPrice of Product "<<i<<": "<<p[i].price;
        }

}
    return 0;
}
