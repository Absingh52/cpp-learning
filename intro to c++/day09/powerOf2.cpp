// check a num is power of two or not
#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"enter the num:";
    cin>>num;

    string result=  num>0 && ((num & (num-1))==0)?"yes":"no";
    cout<<result;
    return 0;
}