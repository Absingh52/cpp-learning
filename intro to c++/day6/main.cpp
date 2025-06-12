#include<iostream>

using namespace std;

int main(){
        // X pattern
        int n=4;
      for(int i=0;i<n;i++){
            if(i==0){
                cout<<"*";
                for(int k=1;k<2*(n-i);k++){
                    cout<<" ";
                }
                cout<<"*";
            }
            else{
                
                    for(int j=0;j<i;j++){
                        cout<<" ";
                    }
                    cout<<"*";
                    for(int k=1;k<2*(n-i);k++){
                        cout<<" ";
                    }
                    cout<<"*";
                
            }
            
            cout<<endl;
            if(i==n-1){
                int a=n+1;
                 for(int i=0;i<a;i++){
                    for(int k=0;k<a-i-1;k++){
                        cout<<" ";
                    }
                    if(i==0){
                        cout<<"*";
                        
                    }
                    else{
                        cout<<"*";
                        for(int k=1;k<2*i;k++){
                            cout<<" ";
                        }
                        cout<<"*";
                    }
                    cout<<endl;
               }
              
               
            }
                   
        }
        cout<<endl;
        // rombus pattern 
         for(int i=0;i<n;i++){
            int k=1;
            while(k<n-i){
                cout<<" ";
                k++;
            }
            for(int j=0;j<n;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        // Number pyramid pattern
          for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<i;
            }
            cout<<endl;
        }
        // Symmetric Number Pyramid
              for(int i=1;i<=n;i++){
            
           
             for(int j =1;j<=i;j++){
                cout<<j;
            }
            int k=0;
            while(k<2*(n-i)){
                cout<<" ";
                k++;
            }
            
            for(int j=i;j>=1;j--)
            {
                cout<<j;
            }
            
            cout<<endl;
    }
        return 0;
}