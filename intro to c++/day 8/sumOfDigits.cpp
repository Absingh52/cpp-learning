#include<iostream>

using namespace std;

int main(){

    //sum of Digits
    int num=123456;
      int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        cout<<"Sum Of Digits : "<<sum;

        return 0;
}