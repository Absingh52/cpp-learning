// More problems related to pattern printing and nested loops 

#include<iostream>

using namespace std;

int main()

{    
    int n=5;
      
   // question 1 Square of *
     
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    //question 2 Right-angled Triangle 
       for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }    
    
    /*
    */
     for(int i=1;i<=n;i++){
        for(int j=5;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
