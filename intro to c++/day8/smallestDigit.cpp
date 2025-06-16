#include<iostream>

using namespace std;

int main(){

    //Smallest Digit
    int num =567012;
     int minidigit=9;
        while(num>0){
            int digit =num%10;
            if(digit<minidigit){
                minidigit=digit;
            }
            num/=10;
        }
        cout<<"Smallest Digit : "<<minidigit;
        return 0;
}