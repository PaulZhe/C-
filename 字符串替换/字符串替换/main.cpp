#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str1, str2, str3, str4;
    int found, i;
    getline(cin, str1);
    while(1) {
        getline(cin, str2);
        i = str2.compare("end");
        if(i==0)
        {
            break;
        }
        str1 += '\n';
        str1 += str2;
    }
    str1 += '\n';
    cin >> str3;
    cin >> str4;
    
    found = str1.find(str3);
    while(found != -1) {
        str1.replace(found, str3.length(), str4);
        found = str1.find(str3, found+1);
    }
    cout << str1;
    return 0;
}
