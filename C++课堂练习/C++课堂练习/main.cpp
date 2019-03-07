//
//  main.cpp
//  C++课堂练习
//
//  Created by 小哲的DELL on 2019/3/7.
//  Copyright © 2019年 小哲的DELL. All rights reserved.
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int abs(int a)
{
    if(a < 0) a = -a;
    return a;
}
long abs(long a)
{
    if(a < 0) a = -a;
    return a;
}
double abs(double a)
{
    if(a < 0) a = -a;
    return a;
}
int main()
{
    int x1; long x2; double x3;
    cin>>x1>>x2>>x3;
    cout<<"x1="<<abs(x1)<<endl;
    cout<<"x2="<<abs(x2)<<endl;
    cout<<"x3="<<abs(x3)<<endl;
    return 0;
}

