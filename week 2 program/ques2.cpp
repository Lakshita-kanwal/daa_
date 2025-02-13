#include<bits/stdc++.h>
using namespace std;

int main(){
      int t;
      cout<<"enter the number of test = ";cin>>t;
      while(t!=0)
      {

        int n,a;
        cout<<endl<<"enter the no. of elements = ";cin>>n;
        vector<int>arr;
        cout<<endl<<"enter elements ";
        for(int i = 0;i<n;i++){
          cin>>a;
          arr.push_back(a);
        }
        for(int i = 0;i<n;i++){
          for(int j = i+1;j<n;j++){
              for(int k = j+1;j<n;j++){
                  if(arr[i]+arr[j] == arr[k]){
                      cout<<endl<<i+1<<","<<j+1<<","<<k+1;
                      break;
                  }
              }
          }
        }
       t--;
      }
     
    return 0;
}