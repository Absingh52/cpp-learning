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
    question 3 inverted triangle
    */
     for(int i=1;i<=n;i++){
        for(int j=5;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    } 
    
    /* 
    question 4 right-aligned triangle
    */

     for(int i=1;i<=n;i++){
       int k=i;
          while (k<=n-1)
         {
            cout<<" ";
            k++;
            
         }
         
        for(int j=1;j<=i;j++){
          
            cout<<"*";
        }
        cout<<endl;
    }    

    /*
    question 5 number triangle
    */
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    
    
    /*Question 6 reverse number triangle*/   
     for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }
        cout<<endl;
    } 
    
    return 0;
}
