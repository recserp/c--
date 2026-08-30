#include <iostream>

class Human{
    public:
    std::string name;
    std::string job;
    int age;

    void eat(){
        std::cout << "this person is eating"<<"\n";

    }
    void work(){
        std::cout << "this person is working"<<"\n";

    }
    void sleep(){
        std::cout << "this person is sleeping";
    }
};
int main(){

    Human ozuss;
    ozuss.name = "ozuss";
    ozuss.age = 54;
    ozuss.job = "idk";

    std::cout << ozuss.name <<"\n"<<ozuss.age;

    ozuss.eat();
    ozuss.work();
    ozuss.sleep();

    return 0;
}
