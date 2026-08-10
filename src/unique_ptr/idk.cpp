#include <iostream>
#include <memory>
#include <string> // string is not a built-in type

class Student {
public:
    std::string name;
    Student(const std::string& n) : name(n) {
        std::cout << name << " enters class!" << std::endl;
    }
    ~Student() {
        std::cout << name << " leaves class!" << std::endl;
    }
};
int main() {
    std::cout<<"Class begins!"<<std::endl;
    {
        std::unique_ptr<Student> Jack = std::make_unique<Student>("Jack");
        std::cout<<"Current student: Jack"<<std::endl;
        std::unique_ptr<Student> Mary = std::move(Jack);
        std::cout<<"unique_ptr changed to mary"<<std::endl;
    }
}
