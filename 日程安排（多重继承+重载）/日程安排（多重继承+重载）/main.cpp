#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

class Date {
protected:
    int year;
    int month;
    int day;
public:
    Date(int _y, int _m, int _d):year(_y), month(_m), day(_d){}
};

class Time {
protected:
    int hour;
    int minute;
    int second;
public:
    Time(int _h, int _m, int _s):hour(_h), minute(_m), second(_s){}
};

class Schedule:public Date, public Time {
private:
    int ID;
public:
    Schedule():Date(0,0,0), Time(0,0,0), ID(0){}
    Schedule(int _id, int _year, int _month, int _day, int _hour, int _minute, int _second):Date(_year, _month, _day), Time(_hour, _minute, _second), ID(_id){}
    bool operator < (const Schedule &s) {
        char timeArr1[15], timeArr2[15];
        sprintf(timeArr1, "%04d%02d%02d%02d%02d%02d", year, month, day, hour, minute, second);
        sprintf(timeArr2, "%04d%02d%02d%02d%02d%02d", s.year, s.month, s.day, s.hour, s.minute, s.second);
        return atof(timeArr1)<atof(timeArr2);
    }
    void show() {
        cout << "The urgent schedule is No."<<ID<<": "<<year<<"/"<<month<<"/"<<day<<" "<<hour<<":"<<minute<<":"<<second<<endl;
    }
};

int main() {
    int id, rows=0;
    int y,m,d,h,i,s;
    Schedule min;
    while (cin>>id) {
        if(id==0) break;
        scanf("%d/%d/%d %d:%d:%d", &y, &m, &d, &h, &i, &s);
        Schedule cur(id, y, m, d, h, i, s);
        if(rows++==0) min = cur;
        //        if(cur<min) min = cur;
    }
    if(rows!=0) min.show();
    
    return 0;
}
