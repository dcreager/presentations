#include <iostream>

using namespace std;

struct person {
    string* name;
    int age;

    person(string name_, int age_) {
        name = new string(name_);
        age = age_;
    }

    ~person() {
        delete name;
    }
};

void
process_family(void) {
    person* me = new person("Doug", 42);
    cout << *me->name << " is "
         << me->age << " years old" << endl;
    delete me;
}

int main(void) {
    process_family();
}
