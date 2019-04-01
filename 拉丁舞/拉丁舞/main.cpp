//
//  main.cpp
//  拉丁舞
//
//  Created by 小哲的DELL on 2019/3/25.
//  Copyright © 2019年 小哲的DELL. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
const int K=2;
const int N=20;
class Student{
    string name;
    Student *welcome[K];
    Student *pair;
public:
    void init(string &name, Student *a, Student *b) {
        this->name=name;
        welcome[0]=a;
        welcome[1]=b;
        pair=NULL;
    }
    void printPair();
    void addPair();
};

void Student::addPair() {
    if (this->welcome[0]->pair == NULL && ((this->welcome[0]->welcome[0] == this) || (this->welcome[0]->welcome[1] == this) || (this->welcome[0]->welcome[0]->pair != NULL && this->welcome[0]->welcome[1]->pair != NULL) )) {
        this->pair = this->welcome[0];
        this->welcome[0]->pair = this;
    } else if (this->welcome[1]->pair == NULL && ((this->welcome[1]->welcome[0] == this) || (this->welcome[1]->welcome[1] == this) || (this->welcome[1]->welcome[0]->pair != NULL && this->welcome[1]->welcome[1]->pair != NULL))) {
        this->pair = this->welcome[1];
        this->welcome[1]->pair = this;
    }
}

void Student::printPair() {
    if (this->pair != NULL) {
        cout << this->name <<":"<< this->pair->name << endl;
    }
}

int main(){
    Student male[N], female[N];
    int m, f, i, j, a, b;
    string name;
    cin>>m;
    for(i=0;i<m;i++){
        cin>>name>>a>>b;
        male[i].init(name, &female[a], &female[b]);
    }
    cin>>f;
    for(i=0;i<f;i++){
        cin>>name>>a>>b;
        female[i].init(name, &male[a], &male[b]);
    }
    for(i=0;i<m;i++) male[i].addPair();
    for(i=0;i<f;i++) female[i].addPair();
    for(i=0;i<m;i++) male[i].printPair();
    return 0;
}
