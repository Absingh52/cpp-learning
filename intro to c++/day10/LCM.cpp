// find lcm of two numbers 
   
#include<iostream>

using namespace std;

// Function to calculate GCD
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM using GCD
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int main()
{
    int a,b;
    cout<<"enter the number a and b";
    cin>>a>>b;
   // this is limited method 
    // for(int i=1;i<=50;i++){
    //         for(int j=0;j<=50;j++){
    //             if(i*a==j*b){
    //                 return  j*b;
    //             }
    //         }
    //     }


   // use Euclidean algorithm for better and dynamic
   cout << "LCM of " << a << " and " << b << " is: " << lcm(a, b) << endl;
        return 0;
} 

