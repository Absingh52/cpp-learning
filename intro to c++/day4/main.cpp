#include<iostream>

using namespace std;

int main(){
    // question 1 solid Pyramid Pattern 
    //for each row * incrrease by 2 for each row
    //center ke liye n-i-1
    //aster print  ke liye 2*i/1
    //in nth row there is no space 
    int n=5;
    for(int i=0;i<n;i++)
    {
          int k=0;
            while(k<n-i-1)
            {  
              
                cout<<" ";
                k++;
            }
        for(int j=0;j<=2*i/1;j++){
          
            cout<<"*";
          
        }
        cout<<endl;
    }


      

        // this one is the inverted pyramid
        // same like the pyramid but the logic for printing space is changed also little bit for asterisk

           for(int i=0;i<n;i++){
            if(i!=0){
                int k=0;
                while(k<i){
                    cout<<"  ";
                    k++;
                }

            }
            for(int j=n*2-1;j>2*i/1;j--){
                cout<<"* ";
            }
            cout<<endl;
        }
        cout<<endl;

        // this one is the hollow pyramid
    
        for(int i=0;i<n;i++){
            int k=0;
            while(k<n-i-1){
                cout<<"  ";
                k++;
            }
            if(i==0 || i==n-1){
            for(int j=0;j<=2*i;j++){
                cout<<"*"<<" ";
            }
            }
            else{
                cout<<"* ";
                 k=1;
                while(k<2*i)
                {
                    cout<<"  ";
                    k++;
                }
                cout<<"*";

            }
            cout<<endl;
        }
        cout<<endl;


        // this one is the solid diamond
          for(int i=0;i<n;i++){
            int k=0;
            while(k<n-i-1){
                cout<<"  ";
                k++;
            }
            for(int j=0;j<=2*i;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
            if(i==n-1){
                for(int l=0;l<n-1;l++){
                    k=0;
                    while(k<=l){
                        cout<<"  ";
                        k++;
                    }
                    for(int m=2*n-3;m>2*l;m--){
                        cout<<"*"<<" ";
                    }
                    cout<<endl;
                }
            }
            
        }
    return 0;
}