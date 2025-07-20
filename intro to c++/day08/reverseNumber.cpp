#include<iostream>

using namespace std;

int main(){

    //Reverse a Number
    int num=90864;
    int digit;
       int reverse=0;
        while(num>0){
            digit=num%10;
            reverse=reverse*10+digit;
            num/=10;
        }
        cout<<"Reverse  Number is : "<<reverse;
        return 0;
}
