//
//  main.cpp
//  补全程序并使其能运行
//
//  Created by 小哲的DELL on 2019/3/7.
//  Copyright © 2019年 小哲的DELL. All rights reserved.
//

#include <iostream>
using namespace std;

int main ( )
{
    double* pDouble  = NULL; // initialized with null
    pDouble = new double;// Request memory for the variable
    
    char* pChar = NULL;// initialized with null
    pChar  = new char[20];   // Request memory for the array
    
    cin>>*pDouble >>pChar;     // Store value at allocated address
    cout << *pDouble<<endl << pChar<<endl ;
    
    delete pDouble;         // free up the memory.
    delete pChar; // free the memory pointed to by pChar
    
    return 0;
}
