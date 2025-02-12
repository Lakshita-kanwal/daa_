#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cout<<endl<<"enter test no. of test cases you want = ";
    cin>>t;
    while(t!= 0){
    int n,a,key,p,count=0;
    cout<<endl<<"enter no. of elements = ";
    cin>>n;
    vector<int>arr;
    for(int i = 0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    cout<<endl<<"enter key for searching = ";cin>>key;
    for(p= 0;p<n;p++){
        if(arr[p] == key ){
            count = 1;
            cout<<endl<<"key found";break;
        }
    }
    if(count == 0){
        cout<<endl<<"key not found";
    }
    cout<<endl<<"number of comparisions = "<<p;
     t--;
    }
    
    return 0;
}