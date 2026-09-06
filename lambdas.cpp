#include <iostream>

int main(){

    auto a = [](float num1,float num2) -> float{return (num1+num2)/2;};
    float avg = a(1,2);
    std::cout << avg;
    return 0;
}