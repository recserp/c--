#include <iostream>

class account{
    public:
    std::string Name;
    double balance;
    int cardNo;
    int pinNo;
    int accountNo;
};

int main(){

    return 0;
}

void create(account *Name,account *balance,account *cardNo,account *pinNo,account accountNo){
    srand(time(NuLL));
    int genrated_a_no = 10000000 + (rand() % 90000000);
    account person1;
    std::cout << "Enter your Name: ";
    std::cin >> person1.Name;
    std::cout << "\n" << "Enter your desired pincode"<<"\n";
    person1.accountNo = genrated_a_no;
    std::cout << "Your account No is"<<person1.account;


}