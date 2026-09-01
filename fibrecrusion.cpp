#include <iostream>
int fib(int nth);
int fibrecur(int nth);
int main(){
    int nth;
    std::cout << "nth term";
    std::cin >> nth;
    std::cout << "output"<<fib(nth)<<" "<<fibrecur(nth-1);
    return 0;
}

int fib(int nth){
    int array[nth] = {0,1};
    for(int i =0; i < nth-1 ;i++){
        array[i+2] = array[i] + array[i+1];
    }
    int out = array[nth-1];
    return out;
}

int fibrecur(int nth){
    if(nth<=1){
        return nth;
    }
    return fibrecur(nth-1) + fibrecur(nth-2);
    
}