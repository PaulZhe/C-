//
//  main.cpp
//  C++第一次作业
//
//  Created by 小哲的DELL on 2019/3/4.
//  Copyright © 2019年 小哲的DELL. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a, b, c, p;
    cin >> a >> b >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        p = (a + b + c) / 2;
        cout << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

