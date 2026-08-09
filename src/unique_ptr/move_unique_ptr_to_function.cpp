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
// this function will change permission to other pointer and call its function (i think maybe)
void takeOwnerShip(std::unique_ptr<ClassRoom> teacher) {
    std::cout<<"Teacher is in class right now!"<<std::endl;
    // call function:
    teacher->teach();
}
int main() {
    std::cout<<"Starting class..."<<std::endl;
    {
        std::unique_ptr<ClassRoom> p = std::make_unique<ClassRoom>();
        // change classroom permission from p to teacher by method (not sure: it's that right?)
        takeOwnerShip(std::move(p));
        std::cout<<"teacher changed!"<<std::endl;
    }
    return 0;
}
