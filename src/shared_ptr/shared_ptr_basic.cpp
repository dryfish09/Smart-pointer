// created by dryfish09. The guy who know a bit C++.
// filename: shared_ptr_basic.cpp
#include <iostream>
#include <memory>
class ClassRoom {
public:
    ClassRoom() {
        std::cout <<"teacher is entering, stand up!"<< std::endl;
    }
    ~ClassRoom() {
       std::cout <<"teacher is leaving, time to rest!"<<std::endl;
    }
    void teaching() {
        std::cout <<"teacher is teaching!"<< std::endl;
    }
};
int main() {
    // print satus:
    std::cout<<"class started!"<<std::endl;
    std::shared_ptr<ClassRoom> teacher1 = std::make_shared<ClassRoom>();
    // count how many teacher are using this teacher's permission
    std::cout<<"Used: " << teacher1.use_count() << " times." <<std::endl;
    {
        // shared_ptr allows copy!
        std::shared_ptr<ClassRoom> teacher2 = teacher1;
        std::cout<<"Used: " << teacher1.use_count() << " times." << std::endl; // must be 2
        teacher2->teaching(); // teacher 2 are teaching!
    } // deleted teacher2, but object still alive because teacher1 still alive.
    // teacher1 deleted here
    return 0;
}
