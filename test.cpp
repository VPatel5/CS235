#include "iostream"

using namespace std;

class Person {

private:
    int age;
    string name;

public:
    int getAge() { return age; }
    string getName() { return name; }
    void setAge(int age);
    void setName(string name);
    void print();
    static Person newInstance();

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

};

void Person::setAge(int age) {
    this->age = age;
}

void Person::setName(string name) {
    this->name = name;
}

void Person::print() {
    cout << "Name: " << getName() << "\n"
    "Age: " << getAge() << endl;
}

Person Person::newInstance() {
    return *new Person("", 0);
}

int main() {

    Person p = *new Person("test", 18);

    p.print();

    p.setAge(100);
    p.setName("test2");

    p.print();

    return 0;
}