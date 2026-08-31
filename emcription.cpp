#include <iostream>
#include <string>
#include <unordered_map>
#include <ctime>
#include <fstream>

std::pair <std::string,std::string> map;



int main(){


    std::string password;
    std::string name;
    std::string confrimpassword;

    std::fstream info("data.csv",std::ios::app);
    std::cout << "Enter your user name:";
    std::getline(std::cin,name);
    std::cout << "\nEnter your password:";
    std::getline(std::cin,password);
    std::cout << "\nConfrim your password:";
    std::getline(std::cin,confrimpassword);
    if(password == confrimpassword){
        
        std::string encripted = map(password,pass);
        info << name<<","<<encripted<<","<<pass<<"\n";
        info.close();
    }
    else{
        std::cout << "password does not match";
    }
    
    return 0;
}


std::pair <std::string,std::string>map {

std::unordered_map<int, char> relation = {
    {100, 'A'}, {99, 'B'}, {98, 'C'}, {97, 'D'}, {96, 'E'}, {95, 'F'}, 
    {94, 'G'},  {93, 'H'}, {92, 'I'}, {91, 'J'}, {90, 'K'}, {89, 'L'}, 
    {88, 'M'},  {87, 'N'}, {86, 'O'}, {85, 'P'}, {84, 'Q'}, {83, 'R'}, 
    {82, 'S'},  {81, 'T'}, {80, 'U'}, {79, 'V'}, {78, 'W'}, {77, 'X'}, 
    {76, 'Y'},  {75, 'Z'},
    {74, 'a'},  {73, 'b'}, {72, 'c'}, {71, 'd'}, {70, 'e'}, {69, 'f'}, 
    {68, 'g'},  {67, 'h'}, {66, 'i'}, {65, 'j'}, {64, 'k'}, {63, 'l'}, 
    {62, 'm'},  {61, 'n'}, {60, 'o'}, {59, 'p'}, {58, 'q'}, {57, 'r'}, 
    {56, 's'},  {55, 't'}, {54, 'u'}, {53, 'v'}, {52, 'w'}, {51, 'x'}, 
    {50, 'y'},  {49, 'z'}
};

    for(int i = 0;i<password.length();i++){
        
        srand(time(NULL));
        if (relation.find(pass) != relation.end()){
    
        int pass = 49+(rand()%50);
        char temp = relation[pass];
        password[i] = 32 + ((password[i] + temp) % 95); 
        }

    }
    return {password,pass};
}

