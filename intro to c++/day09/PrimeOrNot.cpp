// check a num is Prime or not
#include<iostream>

using namespace std;
 string isPrime(int num){
    if(num<=1){
        return"no";
    }
    if(num==2)
    return "yes";
    for (int  i = 2; i*i <=num; i++)
    {
        if(num%i==0)return "no";
    }
    return"yes";
    
 }
int main(){
    int num;
    cout<<"enter the num:";
    cin>>num;
    cout<<isPrime(num);
    return 0;
}