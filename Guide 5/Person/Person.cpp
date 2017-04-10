#include <string>
#include "Person.h"

Person::Person(string name) {
    setName(name);
    setAge("");
    setPhone("");
}

Person::Person(string name, string age, string phone) {
    setName(name);
    setAge(age);
    setPhone(phone);
}

void Person::setName(string name) {
    this->name = name;
}

string Person::getName() {
    return name;
}

void Person::setAge(string age) {
    this->age = age;
}

string Person::getAge() {
    return age;
}

void Person::setPhone(string phone) {
    this->phone = phone;
}

string Person::getPhone() {
    return phone;
}

string Person::toString() {
    return "Name.: " + name + "\nAge..: " + age + "\nPhone: " + phone;
}
