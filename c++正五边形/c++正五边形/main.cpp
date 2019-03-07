//
//  main.cpp
//  c++正五边形
//
//  Created by 小哲的DELL on 2019/3/5.
//  Copyright © 2019年 小哲的DELL. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a;
    cin >> a;
    cout << a * a * sqrt( 25 + sqrt(5) * 10) / 4 << endl;
    cout << a * 5 << endl;
    return 0;
}

