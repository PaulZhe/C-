#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    Person();
    Person(string p_name, int p_age);
    void display() {
        cout << name << ":" << age << endl;
    }
};
Person::Person() {
    name = "";
    age = 0;
}
Person::Person(string p_name, int p_age) {
    name = p_name;
    age = p_age;
}
class Student : Person {
    int ID;//学号
    float cpp_score;//cpp上机成绩
    float cpp_count;//cpp上机考勤
    float cpp_grade;//cpp总评成绩
    //总评成绩计算规则：cpp_grade = cpp_score * 0.9 + cpp_count * 2;
public:
    Student();
    Student(string name1, int id, int age1, float score, float count) {
        name = name1;
        ID = id;
        cpp_score = score;
        cpp_count = count;
        cpp_grade = cpp_score * 0.9 + cpp_count * 2;
    }
    void print() {
        cout<<ID<<" "<<name<<" "<<fixed<<setprecision(1)<<cpp_grade<<endl;
    }
};
int main() {
    string strName;
    int id;
    float score1, age1, count1;
    while (1) {
        cin >> strName;
        if (strName == "0") {
            return 0;
        }
        cin >> id >> age1 >> score1 >> count1;
        Student s(strName, id, age1, score1, count1);
        s.print();
    }
    return 0;
}
