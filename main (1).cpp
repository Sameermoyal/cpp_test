#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr(4);  
    int a1 = 5,a2=6,a3=7,n;
     arr[0]=a1;
     arr[1]=a2;
     arr[2]=a3;
    
    cout<<"enter Nth number";
    cin>>n;
    for(int i=3; i<n; i++){
        arr[i]=a1+a2;
        a1=a2;a2=a3;a3=arr[i];
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    
  
}
