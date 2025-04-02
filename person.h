#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <vector>
#include <string>

class Person {
private:
    std::string name;
    std::string surname;
    std::vector<double> grades;

public:
    Person(const std::string& name, const std::string& surname);

    void add_grade(double grade);
    void print() const;
    double average_grade() const;
};

#endif
