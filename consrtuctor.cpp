#include <iostream>

class student{
    public:
    std::string name;
    int age;
    student(std::string name,int age){
        this->name = name;
        this->age = age;
        
    }
};

int main(){
    student abc("xyz",20);
    std::cout << abc.name << abc.age;
    return 0;
}