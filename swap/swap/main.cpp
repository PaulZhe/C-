#include <iostream>
#include <cstring>
using namespace std;
class Student {
    int number;
    char *name;
    int score;
    
public:
    Student(int kCount, char *kName, int kScore) {
        number = kCount;
        name = new char[strlen(kName) + 1];
        strcpy(name, kName);
        count++;
        score = kScore;
        sum += score;
    }
    ~Student() {
        delete []name;
        count--;
    }
    void print() {
        cout << "number: " << number << " name: " << name << " count: " << count << endl;
    }
    static int count;
    static int sum;
    static void init() {
        sum = 0;
        count = 0;
    }
    static void average() {
        cout << "sum is " << sum << endl;
        cout << "count is " << count << endl;
        cout << "average is " << (float)(sum / count) << endl;
    }
};
int Student::sum;
int Student::count;
int main( )
{
    Student::init( );
    Student stu1(1,"Bill",87);
    stu1.print( );
    
    Student stu2(2,"Adam",91);
    stu2.print( );
    
    Student stu3(3,"David",96);
    stu3.print( );
    
    Student::average( ); //静态成员函数的调用
    
    return 0;
}
