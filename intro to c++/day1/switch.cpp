#include<iostream>

int main(){
   
    int options;
    int balance=5000;
    int amount;
    int total;
    int accountnumber;
    std::cout<<"1. Deposit"<<std::endl<<"2. Withdraw"<<std::endl<<"3. Check Balance"<<std::endl<<"4. Exit"<<std::endl;
    std::cin>>options;

    switch (options)
    {
        case 1:
        {
            
            std::cout<<"Enter you deposit amount=";
            std::cin>>amount;
            total=balance+amount;
            std::cout<<"your balance after deposit ="<<total;
            break;
        }
        case 2:{
            std::cout<<"Enter you Withdraw amount=";
            std::cin>>amount;
            total=balance-amount;
            std::cout<<"your cash "<<amount<<std::endl;
            std::cout<<"your balance ="<<total;
            break;
        }
        case 3:{
            std::cout<<"Enter you account number=";
            std::cin>>accountnumber;
            std::cout<<"your Bank Balance is "<<balance<<std::endl;
            break;
        }
        case 4:{
            std::cout<<"Exit the program";
            
            break;
        }
        default:{
             std::cout << "Invalid option" <<std:: endl;
        }

        }
        return 0;
    }
    




