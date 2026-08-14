#include <iostream>
#include <string>
using namespace std;
struct student{
    int rollno;
    string name;
    string grade;
};

int main() {
    student s1;
    s1.rollno = 101;
    s1.name = "John Doe";
    s1.grade = "A";

    cout << "Student Roll No: " << s1.rollno << endl;
    cout << "Student Name: " << s1.name << endl;
    cout << "Student Grade: " << s1.grade << endl;

    return 0;}


