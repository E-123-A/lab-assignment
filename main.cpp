#include <iostream>
#include <vector>
#include <numeric>

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
    Student student{"John", "Smith", {3.0, 4.5, 5.0, 3.5}};

    student.print();

    std::cout << "Average grade: " << student.calculate_grade() << std::endl;

    return 0;
}
