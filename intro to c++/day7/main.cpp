#include<iostream>

using namespace std;

int main(){

    // Symmetric Alphabet Pyramid Pattern 
      char num =65;
      int n=4;
        for(int i=0;i<n;i++){
            for(int k=0;k<n-i-1;k++){
                cout<<" ";
            }
            for(char j=65 ;j<=65+i;j++){
                cout<<j;
            }
            if(i!=0){
                
                for(char l=64+i;l>=num;l--){
                cout<<l;
               
            }
            }
            cout<<endl;
        }
    
        // Reverse  Alphabet Righjt Triaangle Pattern

         for(int i=n;i>0;i--){
            for(char j=65+i-1;j<=65+n-1;j++){
                cout<<j;
            }
            cout<<endl;
        }

        // Pascal's Triangle Pattern

        for (int i = 0; i < n; i++) {
             
          

            int val = 1;
            for (int j = 0; j <= i; j++) {
                cout << val << " ";
                val = val * (i - j) / (j + 1);  // Calculate next element in row
            }
            cout << endl;
        }
        
        // Hourglass Shape Pattern

         for(int i=0;i<n;i++){
            if(i==0){
                for(int j=n*2;j>2*i;j--){
                    cout<<"*";
                }
            }else{
                
                    for(int k=1;k<=i;k++){
                        cout<<" ";
                    }
                
                for(int j=n*2-1;j>=2*i;j--){
                    cout<<"*";
                }
            }
            cout<<endl;
            if(i==n-1){
                for(int i=1;i<=n;i++){
                    for(int k=0;k<=n-i-1;k++){
                        cout<<" ";
                    }
                    for(int j=0;j<2*i;j++){
                        cout<<"*";
                    }
                    cout<<endl;
                }
            }
        }

        
}