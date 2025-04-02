#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class Student : public Person {
private:
    std::string index_number;

public:
    Student(const std::string& name, const std::string& surname, const std::string& index);
    void print() const;
};

#endif
