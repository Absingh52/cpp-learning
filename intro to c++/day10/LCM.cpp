// find lcm of two numbers 
   
#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"enter the number a and b";
    cin>>a>>b;
    for(int i=1;i<=50;i++){
            for(int j=0;j<=50;j++){
                if(i*a==j*b){
                    return  j*b;
                }
            }
        }
        return 0;
} // namespace std;

