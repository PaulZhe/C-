//
//  main.cpp
//  学号解析
//
//  Created by 小哲的DELL on 2019/4/1.
//  Copyright © 2019年 小哲的DELL. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string str;
    cin >> str;
    cout << "year:" << str.substr(0, 4) << endl << "department:" << str.substr(4,2) << endl << "class:" << str.substr(6, 2) << endl;
}
