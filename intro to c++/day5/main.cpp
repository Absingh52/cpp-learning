 #include<iostream>

using namespace std;

int main(){
 
 int n=10;
    // hollow diamond pattern
    // this for the top part of the hollow diamond 
    for(int i=0 ;i<n;i++){

                int k=0;
                while(k<n-i-1){
                    cout<<" ";
                    k++;
                }
                if(i==0){
                     cout<<"*";
                }
                else{
                    cout<<"*";
                    k=1;
                    while(k<2*i)
                    {
                        cout<<" ";
                        k++;
                    }
                    cout<<"*";
                }
                cout<<endl;
               // for the bottom of the hollow diamond 
                if(i==n-1){
                    
                    for(int j=0;j<n-1;j++){
                        k=0;
                        while(k<=j){
                            cout<<" ";
                            k++;
                        }
                        if(j==n-2){
                           
                                cout<<"*";
                           
                        }
                        else{
                           
                            cout<<"*";
                            k=0;
                            
                            while(k<i-1)
                            {
                                cout<<" ";
                                k++;
                            }
                            cout<<"*";
                        
                        }
                        cout<<endl;
                     }
                }
         
    }
    cout<<endl;
    // butterflyPattern

    for(int i=1;i<=n;i++){
            if(i==n){
               int k=0;
                while(k<n*2){
                    cout<<"*";
                    k++;
                }
            }
           else{
             for(int j =0;j<i;j++){
                cout<<"*";
            }
            int k=0;
            while(k<2*(n-i)){
                cout<<" ";
                k++;
            }
            
       
             for(int j =0;j<i;j++){
                cout<<"*";
            }
           }
            
            cout<<endl;
            
            if(i==n){
                 for(int i=n;i>=1;i--){
                     if(i==n){
                        int k=0;
                         while(k<n*2){
                        cout<<"*";
                        k++;
                        }
                     }
                     else{
                         for(int j =0;j<i;j++){
                                cout<<"*";
                            }
                            int k=0;
                        
                            while(k<2*(n-i)){
                                cout<<" ";
                                k++;
                            
                            }
                            
                    
                            for(int j =0;j<i;j++){
                                cout<<"*";
                            }
                        
                     }
                     cout<<endl;
            }
        }
        
    }
    }

