#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string var;

//C
    cout<<"\n\tPart C\nEnter Mobile Number:\t";
    cin>>var;
if(var.substr(0,4)=="0300" || var.substr(0,4)=="0301" || var.substr(0,4)=="0302" || var.substr(0,4)=="0303" || var.substr(0,4)=="0304" || var.substr(0,4)=="0305" || var.substr(0,4)=="0306" || var.substr(0,4)=="0307" || var.substr(0,4)=="0308" || var.substr(0,4)=="0309")
    {
        cout<<"Your Network Is Mobilink\n\n";
    }

if(var.substr(0,4)=="0310" || var.substr(0,4)=="0311" || var.substr(0,4)=="0312" || var.substr(0,4)=="0313" || var.substr(0,4)=="0314" || var.substr(0,4)=="0315" || var.substr(0,4)=="0316" || var.substr(0,4)=="0317" || var.substr(0,4)=="0318" || var.substr(0,4)=="0319")
    {
        cout<<"Your Network Is Zong\n\n";
    }

if(var.substr(0,4)=="0320" || var.substr(0,4)=="0321" || var.substr(0,4)=="0322" || var.substr(0,4)=="0323" || var.substr(0,4)=="0324" || var.substr(0,4)=="0325" || var.substr(0,4)=="0326" || var.substr(0,4)=="0327" || var.substr(0,4)=="0328" || var.substr(0,4)=="0329")
    {
        cout<<"Your Network Is Warid\n\n";
    }

if(var.substr(0,4)=="0330" || var.substr(0,4)=="0331" || var.substr(0,4)=="0332" || var.substr(0,4)=="0333" || var.substr(0,4)=="0334" || var.substr(0,4)=="0335" || var.substr(0,4)=="0336" || var.substr(0,4)=="0337" || var.substr(0,4)=="0338" || var.substr(0,4)=="0339")
    {
        cout<<"Your Network Is Ufone\n\n";
    }

if(var.substr(0,4)=="0340" || var.substr(0,4)=="0341" || var.substr(0,4)=="0342" || var.substr(0,4)=="0343" || var.substr(0,4)=="0344" || var.substr(0,4)=="0345" || var.substr(0,4)=="0346" || var.substr(0,4)=="0347" || var.substr(0,4)=="0348" || var.substr(0,4)=="0349")
    {
        cout<<"Your Network Is Telenor\n\n";
    }

    return 0;
}
