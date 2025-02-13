#include<bits/stdc++.h>
using namespace std;
int lower(vector<int>&arr,int key){
     int low = 0;
     int high = arr.size()-1;
     while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == key){
            high = mid-1;          
        }
        else if(arr[mid]< key){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
     }
     return low;
}

int upper(vector<int>&arr, int key){
    int low = 0;
    int high = arr.size()-1;
    while(low<=high){
        int  mid = (low+high)/2;
        if(arr[mid] == key){
            low = mid+1;
        }
        else if(arr[mid]<key){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return high;
}

int main(){
    int t;
    cout<<endl<<"enter the no. of test = ";cin>>t;
    while(t!=0){
    int n,a,key;
    vector<int>arr;
    cout<<endl<<"enter the no. of elements = ";cin>>n;
    cout<<endl<<"enter sorted elements here = ";
    for(int i = 0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    cout<<endl<<"enter key = ";cin>>key;
    int c = (upper(arr,key) - lower(arr,key))+1;
    cout<<endl<<"no. of copies = "<<c;
    t--;
    }
    return 0;
}