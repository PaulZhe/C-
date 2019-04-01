//
//  main.cpp
//  第一次实验
//
//  Created by 小哲的DELL on 2019/3/12.
//  Copyright © 2019年 小哲的DELL. All rights reserved.
//

#include <iostream>
using namespace std;

class Rectangle {
public:
    Rectangle(double m, double n);
    double getArea();        //计算并返回矩形的面积
    double getPerimeter();
private:
    double length, width;    //矩形的长度和宽度
};

int main()
{
    double m,n;
    cin>>m;
    cin>>n;
    Rectangle a(m,n);
    cout<<a.getArea()<<endl;
    cout<<a.getPerimeter()<<endl;
    return 0;
}

Rectangle::Rectangle(double m, double n) {
    length = m;
    width = n;
}

double Rectangle::getArea() {
    return length * width;
}

double Rectangle::getPerimeter() {
    return 2 * (length + width);
}
