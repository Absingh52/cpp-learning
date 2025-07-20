#include<iostream>

int main(){
    double a,b;
    char sign;
    std::cout<<"enter digit a: "<<std::endl;
    std::cin>>a;
    std::cout<<"enter digit b:"<<std::endl;
    std::cin>>b;

    std::cout<<"sign :"<<std::endl;
    std::cin>>sign;

    if(sign=='+'){
        std::cout<<"addition of "<<a<<"+"<<b<<":"<<a+b<<std::endl;
    }
    else if(sign =='-'){
        std::cout<<"subtraction of "<<a<<"-"<<b<<":"<<a-b<<std::endl;
        
    }
    else if(sign=='*'){
        std::cout<<"multiplication of "<<a<<"*"<<b<<":"<<a*b<<std::endl;

    }
    else if(sign=='/'){
        std::cout<<"division of "<<a<<"/"<<b<<":"<<a/b<<std::endl;

    }
    else {
        std::cout<<"enter number plz"<<std::endl;
        

    }
    return 0;


}