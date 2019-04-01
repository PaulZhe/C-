//
//  main.cpp
//  C++第一次作业
//
//  Created by 小哲的DELL on 2019/3/4.
//  Copyright © 2019年 小哲的DELL. All rights reserved.
//

#include <iostream>
using namespace std;
class CAT
{
    public:
        CAT();
        CAT(const CAT&);
        ~CAT();
        int GetAge() const { return *itsAge; }
        void SetAge(int age){ *itsAge=age; }
    protected:
        int* itsAge;
};
CAT::CAT()
{    itsAge=new int;
    *itsAge =5;
}
CAT::CAT(const CAT& c)
{
    c.CAT::~CAT();
    c.CAT::SetAge(c.GetAge());
}
CAT::~CAT()
{     delete itsAge;   }
