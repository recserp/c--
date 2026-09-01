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
    student ozuss("ozuss",20);
    std::cout << ozuss.name << ozuss.age;
    return 0;
}