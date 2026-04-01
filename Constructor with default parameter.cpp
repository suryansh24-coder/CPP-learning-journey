#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n = "Unknown", int a = 0) {
        name = n;
        age = a;
    }
};

int main() {
    Student s1;
    Student s2("Suryansh");
    Student s3("Rahul", 20);

    cout << s1.name << " " << s1.age << endl;
    cout << s2.name << " " << s2.age << endl;
    cout << s3.name << " " << s3.age << endl;

    return 0;
}