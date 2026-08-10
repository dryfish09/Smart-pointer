// Created by dryfish09. The guy who is the C++ newcomer
// filename: unique_ptr_move_pointer.cpp
#include <iostream>
#include <memory>
class ClassRoomInit {
// this part is same as file 'unique_ptr_basic.cpp'
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
       // create a new pointer which it doesn't has values (nullptr)
       std::unique_ptr<ClassRoomInit> pointerlol;
        // move permission to new pointer. Do not copy like pointerlol = p
       pointerlol = std::move(p); // moved permission!
    }
    return 0;
}
