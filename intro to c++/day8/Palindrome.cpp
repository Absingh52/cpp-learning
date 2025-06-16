#include<iostream>

using namespace std;

int main(){
    // Palindrome Numder
         int digit;
         int num=1221;
         int No=num;
       int reverse=0;
        while(num>0){
            digit=num%10;
            reverse=reverse*10+digit;
            num/=10;
        }
        if(reverse==No){
            cout<<"Yes";
        }
         else{
            cout<<"No";
        }
}