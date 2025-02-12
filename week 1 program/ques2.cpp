#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cout<<"enter the number of test cases = ";cin>>t;
    while(t!= 0){
        vector<int>arr;
        int n,a,key;
        cout<<endl<<"enter total no. of elements = ";cin>>n;
        for(int i = 0;i<n;i++){
            cin>>a;
            arr.push_back(a);
        }
        cout<<endl<<"enter key for searching = ";cin>>key;
        int low = 0;
        int high = n-1;
        int count = 0;
        int check = 0;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]==key){
                cout<<endl<<"found";
                check++;
                break;
            }
            else if(arr[mid]<key){
                low = mid+1;
                count++;
            }
            else{
                high = mid-1;
                count++;
            }
        }
       if (check == 0){
        cout<<endl<<"key not found";
       }
       cout<<endl<<"Number of comparision = "<<count;
    }
    return 0;
}