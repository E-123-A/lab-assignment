#include "Person.h"
#include <iostream>

Person::Person(const std::string& name, int age) : name(name), age(age) {}

void Person::print_info() const {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}
