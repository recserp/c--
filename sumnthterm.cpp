#include <iostream>

int sum(int l);

int main(){
    int a =0;
    std::cout << "No to sum";
    std::cin >> a;
    std::cout << "The sum is:"<< sum(a);
    return 0;
}

int sum(int l){
    if(l>1){
        return l+sum(l-1);
    }
    else{
        return 1;
    }
}

int fib(int b){

}