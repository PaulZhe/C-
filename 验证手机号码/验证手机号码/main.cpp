//
//  main.cpp
//  验证手机号码
//
//  Created by 小哲的DELL on 2019/4/2.
//  Copyright © 2019年 小哲的DELL. All rights reserved.
//

#include <iostream>
#include<string>
using namespace std;

int main()
{
    int f1 = 0, f2 = 0, f3 = 1, i;
    string str1;
    getline(cin, str1);
    if (str1.at(0) == '1') {
        f1 = 1;
    }
    if (str1.size() == 11) {
        f2 = 1;
    }
    for (i = 0; i < 11; i++) {
        if (str1.at(i) <= '9' && str1.at(i) >= '0') {
            continue;
        } else {
            f3 = 0;
            break;
        }
    }
    if(f1 == 1 && f2 == 1 && f3 == 1) {
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}
