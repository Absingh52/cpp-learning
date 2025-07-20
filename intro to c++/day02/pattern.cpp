
#include<iostream>
using namespace std;
// Question 5
// Pattern
// N = 5
//   *
//  ***
// *****
//  ***
//   *


void printPatt(int n){
    int i=1;
    while(i<=(n)){
        int gaps = n-2*i+1,k=1;
        if(i>(n+1)/2){
            int no = (n+1)/2;
            gaps = 2*(i%no);
        }
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        int ch = n - gaps;
        while(ch>=1){
            cout<<"*";
            ch = ch - 1;
        }
        k = 1;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}


int main(){
	printPatt(5);
    
    // Question 1 Debug the code. It is trying to print the given pattern.
    // Pattern
    // N = 4
    // 1
    // 22
    // 333
    // 4444

  int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
	        cout<<i;
        }
    cout<<endl;
    }

    
        // Question 2 Debug the code. It is trying to print the given pattern.
        // Pattern
        // N = 4
        // 1
        // 21
        // 321
        // 4321

  int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
       int p=i;
        for(j=1;j<=i;j++){
          cout<<p;
          p--;
        }
        cout<<endl;
        
    }
    

   
    // Question 3
    // Debug the code. It is trying to print the given pattern.
    // Pattern
    // N = 5
    // E
    // DE
    // CDE
    // BCDE
    // ABCDE

    int i,j,n;;
    cin>>n;
    for(i=1;i<=n;i++){
        char p='F'-i;
        for(j=1;j<=i;j++){
            cout<<p;
            p++;  
        }
        cout<<endl;
    }



     //    Question 4 Debug the code. It is trying to print the given pattern.
     //    Pattern
     //    N = 4
     //    1
     //   232
     //  34543
     // 4567654


    int no;
    cin>>no;
    int i=1;
    int n = 2*no;
    while(i<=(no)){
        int gaps = n-2*i+1,k=1;
        int j = i;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        int ch = n - gaps + 1, z = (ch+1)/2;
        while(z>=1){
            cout<<j;
            j = j + 1;
            z = z - 1;
        }
        j = j - 1;
        z = (ch-1)/2;
        while(z>=1){
            j = j - 1;
            cout<<j;
            z = z - 1;
        }
        k = 1;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
   
   
    return 0;
}
