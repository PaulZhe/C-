//
//  main.cpp
//  分离目录路径和文件名
//
//  Created by 小哲的DELL on 2019/4/2.
//  Copyright © 2019年 小哲的DELL. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

void file(string &str)
{
    int found = str.find_last_of("\\/");
    cout << str.substr(0, found) << endl;
    cout << str.substr(found + 1) << endl;
    
}

int main()
{
    string str1;
    getline(cin,str1);
    file(str1);
    return 0;
}
