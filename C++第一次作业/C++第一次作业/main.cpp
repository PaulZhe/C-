#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,str2,str3;
    cin>>str;
    int k;
    int found = str.find("/");
    while(found)
    {
        k = found;
        found = str.find("/",found+1);
        if(found==string::npos)
        {
            str2 = str.substr(k+1);
            break;
        }
    }
    str3 = str.substr(0,str.length()-str2.length()-1);
    cout<<str3<<endl;
    cout<<str2;
}
