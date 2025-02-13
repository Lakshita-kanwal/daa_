#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cout<<endl<<"enter no. of test cases = ";cin>>t;
    while(t!=0){
        int  n;
        cout<<endl<<"enter the no. of elements = ";cin>>n;
        cout<<endl<<"enter elements :- ";
        vector<int>arr(n);
        for(int i = 0;i<n;i++){
          cin>>arr[i];
        }
        int key,c = 0;
        cout<<endl<<"enter the key = ";cin>>key; 
        sort(arr.begin(),arr.end());
        int left = 0;
        int right = 1;
        while(left<n && right <n){
          if(arr[right]-arr[left] == key ){
            left++;
            right++;
            c++;
          }
          else if(arr[right] - arr[left] < key){
             
            right++;
          }
          else{
             left++;
              
          }

        }
        cout<<endl<<"no. of termes whose difference is same as key = "<<c;
        t--;
    }
    return 0;
}