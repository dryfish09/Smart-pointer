// created by dryfish09.
// filename: move_unique_ptr_to_function.cpp
#include <iostream>
#include <memory>
class ClassRoom {
public:
    ClassRoom() {
        std::cout<<"Teacher is entering, stand up!"<<std::endl;
    }
    ~ClassRoom() {
        std::cout<<"Teacher is leaving!"<<std::endl;
    }
    // object's method.
    void teach() {
        std::cout<<"Teacher is teaching...."<<std::endl;
    }
};
// idk what's it means rn
// todo: delete this line
void takeOwnerShip(std::unique_ptr<ClassRoom> teacher) {
    std::cout<<"Teacher is in class right now!"<<std::endl;
    // call function:
    teacher->teach();
}
int main() {
    std::cout<<"Starting class..."<<std::endl;
    {
        std::unique_ptr<ClassRoom> p = std::make_unique<ClassRoom>();
        // idk how to explain it. todo: delete this line
        takeOwnerShip(std::move(p));
        std::cout<<"teacher changed!"<<std::endl;
    }
    return 0;
}
