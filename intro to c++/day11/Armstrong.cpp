// Check if a Number is a Narcissistic Number

#include<iostream>
#include<string>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number :";
    cin>>num;
    int number=num;
            int digit=0;
          
            int sum=0;
            while(num>0){
                digit++;
                num=num/10;
            }
            num=number;
            for(int i=0;i<digit;i++){
                int k=num%10;
                  int mul=1;
                for(int j=0;j<digit;j++){
                    mul=mul*k;
                }
                sum=sum+mul;
                num=num/10;

            }
           string result=sum==number?"yes":"no";
           cout<<result;
}