//
//  main.cpp
//  验证手机号码
//
//  Created by 小哲的dell on 2019/7/1.
//  Copyright © 2019 小哲的dell. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string str;
    __SIZE_TYPE__ length;
    cin >> str;
    length = str.length();
    if (length != 11) {
        cout << "No" << endl;
        return 0;
    }
    if (str[0] != '1') {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < length; i++) {
        if (str[i] > '9' || str[i] < '0') {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
