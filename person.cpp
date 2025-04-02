#include "person.h"

Person::Person(const std::string& name, const std::string& surname)
    : name(name), surname(surname) {}

void Person::add_grade(double grade) {
    if (grade >= 2.0 && grade <= 5.0) {
        grades.push_back(grade);
    } else {
        std::cout << "Invalid grade! Enter a value between 2.0 and 5.0." << std::endl;
    }
}

void Person::print() const {
    std::cout << name << " " << surname << ": ";
    for (double grade : grades) {
        std::cout << grade << " ";
    }
    std::cout << std::endl;
}

double Person::average_grade() const {
    if (grades.empty()) return 0.0;
    double sum = 0;
    for (double grade : grades) {
        sum += grade;
    }
    return sum / grades.size();
}
