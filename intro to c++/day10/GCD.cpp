// FInd the gcd of two numbers

#include<iostream>

using namespace std;

int main()
{   
    int a,b;
    cout<<"enter the number a and b";
    cin>>a>>b;
      while(b!=0){
            int temp =b;
            b=a%b;
            a=temp;
        }
        cout<<"Gcd of "<<a<<"and"<<b<<"is"<<a;
    return 0;
} 
