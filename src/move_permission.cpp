// Created by dryfish09. The guy who is the C++ newcomer
// filename: mov_permission.cpp
#include <iostream>
#include <memory>
class ClassRoomInit {
public:
    ClassRoomInit() {
         std::cout<<"Teacher is entering, stand up!"<<std::endl;
     }
    ~ClassRoomInit() {
        std::cout<<"Teacher is out, let's play!"<<std::endl;
    }
};
int main() {
std::cout<<"Class begin!"<<std::endl;
    {
       std::unique_ptr<ClassRoomInit> p = std::make_unique<ClassRoomInit>();
       std::unique_ptr<ClassRoomInit> pointerlol;
       pointerlol = std::move(p); // moved permission!
    }
    return 0;
}
