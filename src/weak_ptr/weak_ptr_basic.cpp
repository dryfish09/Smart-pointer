// Created by dryfish09
// filename: weak_ptr_basic.cpp
#include <iostream>
#include <memory>
class ClassRoom {
public:
    ClassRoom() {
        std::cout << "Teacher is entering! stand up." << std::endl;
    }
    ~ClassRoom() {
        std::cout<<"Teacher is leaving, time to rest!"<<std::endl;
    }
    void teach() {
        std::cout<<"Teaching..."<<std::endl;
    }
};
int main() {
    std::cout<<"Class started!"<<std::endl;
    {
        // create shared pointer (owner):
        std::shared_ptr<ClassRoom> owner = std::make_shared<ClassRoom>();
        // create a weak pointer (watcher):
        std::weak_ptr<ClassRoom> watcher = owner; // it will not increase use_count number.
        // check how many pointers are using owner shared pointer:
        std::cout<<"Used time: " << owner.use_count() <<std::endl; // will be 1 (itself)
        // is object alive? Let's check!
        if (watcher.expired()) {
            std::cout<<"object died!"<<std::endl;
        } else {
            std::cout<<"Object still alive"<<std::endl;
        }
    }
    return 0;
}
