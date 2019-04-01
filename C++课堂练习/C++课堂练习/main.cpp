//
//  main.cpp
//  C++课堂练习
//
//  Created by 小哲的DELL on 2019/3/7.
//  Copyright © 2019年 小哲的DELL. All rights reserved.
//

#include <iostream>
using namespace std;
class Stock {
public:
    void set(char s1[], char s2[]) {
        for (int i = 0; i < 20; i++) {
            sysbol[i] = s1[i];
            name[i] = s2[i];
        }
    }
    double changePercent() {
        return (currentPrice - previousClosingPrice) / previousClosingPrice;
    }
    char  name[20];
    char sysbol[20];
    double previousClosingPrice, currentPrice;
};

int main( ) {
    char s1[20],n1[20];
    cin>>s1>>n1;
    Stock stock;
    stock.set(s1, n1);
    // 输入前一日收盘价
    cin>>stock.previousClosingPrice;
    
    // 输入当前成交价
    cin>>stock.currentPrice;
    
    // 显示股票信息
    cout<<stock.name<<" price changed: " <<(stock.changePercent() * 100)<<"%";
    return 0;
}


