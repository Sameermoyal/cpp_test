#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> arr(4);  
    int a1 = 5,a=5;
    
    
    for(int i=0;i<4;i++){
        arr[i].resize(4-i);
        
       
        if(i==0){
             a=a1;
            for(int j=0;j<4-i;j++){
          cout<<a<<" ";
          arr[i][j]=a;
          
          if(j==0 ){
              a=a1+1;
          }
         
          else{
          a=arr[i][j-1]+arr[i][j];
          }
        }
        
        }
        
        else{
             
           
            for(int j=0;j<4-i;j++){
                 a=arr[i-1][j+1];
                 arr[i][j]=a;
          
          cout<<a<<" ";
    
        }
            
            
        }
        
        cout<<"\n";
    }

  
}
