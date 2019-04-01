#include<cstring>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    char s[10000];
    int i;
    while(cin >> s1 >> s2)
    {
        int flag = 0;
        int len = s1.length();
        if(s2.size() < len)
            len = s2.length();
        for(i = 0;i< len;++i)
        {
            if(s1[i] == s2[i])
            {
                s[i] = s1[i];
                flag = 1;
            }
            else
                break;
        }
        if(flag)
            cout << "The common prefix is " << s << endl;
        else
            cout << "No common prefix" << endl;
    }
    return 0;
}
