//
//  main.cpp
//  补全程序并使其能运行
//
//  Created by 小哲的DELL on 2019/3/7.
//  Copyright © 2019年 小哲的DELL. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;
class student{
private:
    double *grade;
    double *score;
    string name;
public:
    student( )
    {
        grade=NULL;
        score=NULL;
    }
    student(string n, double *g, double *s)
    {
        name=n;
        grade=g;
        score=s;
    }
    friend double averagegrade(student *stu, int count){
        //单门课程的学分绩点=学分*绩点=学分*(成绩/10-5) ; 全班同学的平均绩点是 所有同学的全部课程的学分绩点之和/所有同学学分数之和。
        double gradeSum = 0, scoreSum = 0, average = 0;
        for (int i = 0; i < count; i++) {
            for (int j = 0; ; <#increment#>) {
                <#statements#>
            }
            
            gradeSum += *stu[i].score * (*stu[i].grade / 10.0 - 5);
            scoreSum += *stu[i].score;
        }
    }
};
//student::averagegrade() {
//
//}

int main()
{
    student stu[100];
    double s[100][100], g[100][100];
    int count=0;
    string n;
    for(int i=0;i<100;i++)
    {
        cin>>n;
        if(n=="no") break;
        count++;
        for(int j=0;j<100;j++)
        {
            cin>>s[i][j];
            if(s[i][j]==-1) break;
            cin>>g[i][j];
        }
        stu[i]=student(n, g[i], s[i]);
    }
    cout<<averagegrade(stu, count);
    return 0;
}
