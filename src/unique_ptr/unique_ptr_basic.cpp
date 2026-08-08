// Created by dryfish09. The guy who is the C++ newcomer
// filename: unique_ptr_basic.cpp
#include <iostream>
#include <memory>
class ClassRoomInit {
public:
    // constructor method
    ClassRoomInit() {
         std::cout<<"Teacher is entering, stand up!"<<std::endl;
     }
     // destructor method (same as class name and constructor but add '~' before nsmame like ~SomeThing)
    ~ClassRoomInit() {
        std::cout<<"Teacher is out, let's play!"<<std::endl;
    }
};
int main() {
std::cout<<"Class begin!"<<std::endl;
    // starting scope
    {
       std::unique_ptr<ClassRoomInit> p = std::make_unique<ClassRoomInit>();
    } // pointer will delete if it's out-of-scope, so we no need to worry about dangling ptr, UAF,.. That's wy we call it smart pointer.
    return 0;
}
