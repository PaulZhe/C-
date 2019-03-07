//
//  main.cpp
//  求最大值和最小值
//
//  Created by 小哲的DELL on 2019/3/7.
//  Copyright © 2019年 小哲的DELL. All rights reserved.
//

#include <iostream>
using namespace std;
void f(int a[],int n,int &max,int &min)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]>=max)   max=a[i];
        if(a[i]<=min)   min=a[i];
    }
}

int main( )
{
    int a[10];
    int max,min,i;
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    f(a,10,max,min);
    cout<<"Max: "<<max<<endl;
    cout<<"Min: "<<min<<endl;
    return 0;
}
