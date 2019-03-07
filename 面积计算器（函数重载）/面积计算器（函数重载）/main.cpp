//
//  main.cpp
//  面积计算器（函数重载）
//
//  Created by 小哲的DELL on 2019/3/7.
//  Copyright © 2019年 小哲的DELL. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;
int area(int,int);
int area(int,int,int);
int main()
{
    int i, repeat, c, x, y, z;
    cin>>repeat;
    for(i=0;i<repeat;i++){
        cin>>c;
        if(c==2){
            cin>>x>>y;
            cout<<area(x,y)<<endl;
        }
        if(c==3){
            cin>>x>>y>>z;
            cout<<area(x,y,z)<<endl;
        }
    }
    return 0;
}
int area(int x, int y) {
    return x * y;
}
int area(int x, int y, int z) {
    return 2 * (x * y + x * z + y * z);
}
