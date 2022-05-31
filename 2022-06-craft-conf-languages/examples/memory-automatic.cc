#include <iostream>
#include <memory>

using namespace std;

struct person {
    unique_ptr<string> name;
    int age;

    person(const string& name, int age) :
        name(make_unique<string>(name)),
        age(age) {}
    ~person() = default;
};

void
process_family(void) {
    shared_ptr<person> me =
        make_shared<person>("Doug", 42);
    cout << *me->name << " is "
         << me->age << " years old" << endl;
}

int main(void) {
    process_family();
}
