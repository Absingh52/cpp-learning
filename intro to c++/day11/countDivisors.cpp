#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter the Number:";
    cin>>num;
    int digit =0;
        for(int i=1;i<=num;i++)
        {
            if(num%i==0){
                digit++;
            }
        }
        cout<< digit;

        return 0;
}