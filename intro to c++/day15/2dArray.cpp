#include <iostream>
using namespace std;

int main() {
  int arr[3][3]={1,2,3,4,5,6,7,8,9};
 
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<",";
    }
    cout<<endl;
  }
 cout<<"snake traverse";
  for(int i=0;i<3;i++){
     int left=0;
     int right =3;
    if(i%2==0){
        while(left<right){
            cout<<arr[i][left]<<",";
            left++;
        }
        
    }

    else{
        
        left=2;
        while(left>=0 )
        {
            cout<<arr[i][left]<<",";
            left--;
        }
        
    }
  }
cout<<endl;
 cout<<"wave traverse";
for(int j=0;j<3;j++){
     int top=0;
     int bottom =3;
    if(j%2==0){
        while(top<bottom){
            cout<<arr[top][j]<<",";
            top++;
        }
        
    }

    else{
        
        top=2;
        while(top>=0 )
        {
            cout<<arr[top][j]<<",";
            top--;
        }
        
    }
  }

  cout<<endl;
 cout<<"boundary traverse";
for(int i=0;i<3;i++){
     int top=0;
     int left=0;
     int right=3;
     int bottom =3;
    if(i%2==0){
       if(left<right){
         while(left<right){
            cout<<arr[i][left]<<",";
            left++;
        }
        
       }
       else{
        while(left>0){
            cout<<arr[i][left];
            left--;
        }
       }
        
    }

    else{
        
        left=2;
        while(top<left )
        {
            cout<<arr[top][left]<<",";
            top++;
        }
        
        
    }
  }
  return 0;
}