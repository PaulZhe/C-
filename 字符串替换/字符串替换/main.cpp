//
//  main.cpp
//  字符串替换
//
//  Created by 小哲的dell on 2019/6/30.
//  Copyright © 2019 小哲的dell. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string str, strEnd, str1, str2;
    int i, found;
    getline(cin, str);
    while (1) {
        getline(cin, strEnd);
        i = strEnd.compare("end");
        if (i == 0) {
            break;
        }
        str += '\n';
        str += strEnd;
    }
    str += '\n';
    cin >> str1 >> str2;
    found = str.find(str1, 0);
    while (found > 0) {
        str.replace(found, str1.length(), str2);
        found = str.find(str1, found+1);
    }
    cout << str;
    return 0;
}
