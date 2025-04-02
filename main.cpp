#include "student.h"

int main() {
    Student student("Jan", "Kowalski", "s12345");
    student.add_grade(3.0);
    student.add_grade(4.5);
    student.add_grade(5.0);
    student.add_grade(3.5);

    student.print();
    std::cout << "Average grade: " << student.average_grade() << std::endl;

    return 0;
}
