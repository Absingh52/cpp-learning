#include<iostream>
// find 2's complement 
using namespace std;
int main()
{      int num;
     cout<<"enter number:";
        cin>> num;
      int result =~num+1;
        cout<< "the 2's Complement is:"<<result;
} // namespace std;

