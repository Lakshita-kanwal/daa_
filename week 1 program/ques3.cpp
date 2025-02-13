#include<bits/stdc++.h>
using namespace std;
void search(vector<int>&arr,int i,int n,int key){
    
    for(int p = i;p<=n;p++){
        if(arr[p] == key){
            cout<<endl<<"key found ";
            return;
        }
    }
    cout<<endl<<"key not found ";
    return;
}
int main(){
    int t;
    cout<<"enter the number of test cases = ";cin>>t;
    while(t != 0){
         vector<int>arr;
        int n,a,key;
        cout<<endl<<"enter total no. of elements = ";cin>>n;
        for(int i = 0;i<n;i++){
            cin>>a;
            arr.push_back(a);
        }
        cout<<endl<<"enter key for searching = ";cin>>key;
        if(arr[0]>key){
            cout<<endl<<"key not found";
            return 0;
        }
        
        for(int i = -1;i<n;i++){
            int curr = pow(2,i);
            int next = pow(2,i+1);
            if(arr[curr] == key){
                cout<<endl<<"found";
                break;
            }
          
            else if(arr[curr]>key && curr==0){
                cout<<"not found";
                break;
            }
            else if(arr[curr]<key && arr[next]<key){
                continue;
            }
            else if(arr[curr]<key && key<arr[next]){
                search(arr,curr,next,key);
                break;
            }
            else if(next>n && arr[curr]<key){
                search(arr,curr,n-1,key);
                break;
            }

        }
            t--;
        }
    return 0;
}