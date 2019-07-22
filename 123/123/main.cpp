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
    friend double averagegrade(student *stu, int count);
};
/* 请在这里填写答案 */
double averagegrade(student *stu, int count) {
    double sumGrade = 0, sumScore = 0, t;
    for (int i = 0; i < count; i++) {
        for (int j = 0; stu[i].score[j] != 0; j++) {
            sumGrade += stu[i].score[j] * ((double)(stu[i].grade[j] / 10) - 5);
            t = j - 1;
        }
        sumScore += t;
    }
    return (sumGrade / sumScore);
}

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
