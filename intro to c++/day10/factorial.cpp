// find factorial of number 
#include<iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
           long long int fact;
        fact=1;
        if(num>=0){
              for(int i=1;i<=num;i++){
            fact=fact*i;
        }
        cout<< fact;
        }
    return 0;
}