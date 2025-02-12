#include<bits/stdc++.h>
using namespace std;

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
        int check = 0;
        int p;
        for(p = 0;p<n;p=p+2){      
            if (arr[p]>key){
                break;
            }                
            }
        for(int i = 0;i<p;i++){
            if(arr[i]== key){
                check++;
                cout<<endl<<"key is found ";
                break;
            }
        }
            if(check == 0){
                cout<<endl<<"key is not found";
            }
            t--;
        }
           
        
     
    
    return 0;
}