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
    void teach() {
        std::cout<<"Teacher is teaching...."<<std::endl;
    }
};
void takeOwnerShip(std::unique_ptr<ClassRoom> teacher) {
    std::cout<<"Teacher is in class right now!"<<std::endl;
    teacher->teach();
}
int main() {
    std::cout<<"Starting class..."<<std::endl;
    {
        std::unique_ptr<ClassRoom> p = std::make_unique<ClassRoom>();
        takeOwnerShip(std::move(p));
        std::cout<<"teacher changed!"<<std::endl;
    }
    return 0;
}
