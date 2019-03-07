//
//  main.cpp
//  C++习题课
//
//  Created by 小哲的DELL on 2019/3/5.
//  Copyright © 2019年 小哲的DELL. All rights reserved.
//

#include <iostream>

int myMax(int a, int b);
int myMax(int a, int b, int c);
double myMax(double a, double b);
using namespace std;
int myMax(int a, int b) {
    return (a > b ? a : b);
}
int myMax(int a, int b, int c) {
    int t;
    t = myMax(a, b);
    return(t > c ? t : c);
}
double myMax(double a, double b) {
    return (a > b ? a : b);
}
int main(){
    cout<<myMax(3,4)<<endl;
    cout<<myMax(3,4,5)<<endl;
    cout<<myMax(4.3,3.4)<<endl;
}
