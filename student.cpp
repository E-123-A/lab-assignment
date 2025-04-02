#include "student.h"

Student::Student(const std::string& name, const std::string& surname, const std::string& index)
    : Person(name, surname), index_number(index) {}

void Student::print() const {
    Person::print();
    std::cout << "Index: " << index_number << std::endl;
}
