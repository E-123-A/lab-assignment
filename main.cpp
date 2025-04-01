#include <iostream>
#include <vector>
#include <numeric>
#include "Person.h"

class Student {
public:
    std::string name;
    std::string surname;
    std::vector<float> grades;

    float calculate_grade() {
        float sum = std::accumulate(grades.begin(), grades.end(), 0.0f);
        return sum / grades.size();
    }

    void print() {
        std::cout << name << " " << surname << ": ";
        for (const auto& grade : grades) {
            std::cout << grade << " ";
        }
        std::cout << std::endl;
    }
};


int main() {
    Person person("Alice", 25);
    person.print_info();
    return 0;
}
