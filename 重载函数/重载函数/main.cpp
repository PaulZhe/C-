//
//  main.cpp
//  重载函数
//
//  Created by 小哲的dell on 2019/6/29.
//  Copyright © 2019 小哲的dell. All rights reserved.
//

#include <iostream>
using namespace std;
int myMax(int a, int b) {
    return (a > b ? a: b);
}

int myMax(int a, int b, int c) {
    int t;
    t = myMax(a, b);
    return t > c ? t : c;
}

double myMax(double a, double b) {
    return a > b ? a : b;
}

int main(){
    cout<<myMax(3,4)<<endl;
    cout<<myMax(3,4,5)<<endl;
    cout<<myMax(4.3,3.4)<<endl;
}
