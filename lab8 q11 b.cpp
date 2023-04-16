#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string var;

//B
    cout<<"\n\tPart B\nEnter CMS ID:\t";
    cin>>var;
    cout<<"Your Department: "<<var.substr(2,1)<<"\nYour Enrolling Year: 20"<<var.substr(4,2)<<"\n\n\n";



    return 0;
}
