#include<iostream>
 
int main(){
    // int a;
    std::string name;
    // std::cout<<"enter the numbers :"<<std::endl;
    // std::cin>>a;
    //  std::cin.ignore(); // ignores the new line or leftover characters in the input buffer 
    std::cout<<"enter the name :"<<std::endl;
    std::getline(std::cin,name); // treats it like a new line so it not wait for the input and print the empty string 
    // std::cin>>name;
    // if(std::cin.fail()){
    //     std::cout<<"invalid input"<<std::endl;


    // }
    std::cout << "Number: " << name << std::endl;
    return 0;
}