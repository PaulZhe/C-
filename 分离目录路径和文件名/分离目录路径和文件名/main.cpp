//
//  main.cpp
//  分离目录路径和文件名
//
//  Created by 小哲的dell on 2019/7/1.
//  Copyright © 2019 小哲的dell. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string str, str1, str2;
    cin >> str;
    __SIZE_TYPE__ found = str.find_last_of("/\\");
    str1 = str.substr(0, found);
    str2 = str.substr(found+1);
    cout << str1 << endl << str2 << endl;
    return 0;
}
