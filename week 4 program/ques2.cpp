
#include<bits/stdc++.h>
using namespace std;

void check(vector<int>&arr,int key , vector<int>&ans){
sort(arr.begin(),arr.end());
int l = 0;
int r = arr.size()-1;
for(int i = 0;i<arr.size();i++){
if(arr[l]+arr[r] ==key){
ans.push_back((arr[r] , arr[l] ));
 r--;
 l++;
}
else if (arr[l] + arr[r] <key){
l++;
}
else{
r--;
}
}
}

int main(){
int t;
cout<<"enter no. of test cases = ";cin>>t;
while(t!=0){
int key,n;
cout<<"enter no. of elements = ";cin>>n;
cout<<endl<<"enter elements = ";
vector<int>arr(n);
for(int i = 0;i<n;i++){
cin>>arr[i];
}
cout<<endl<<"enter key = ";cin>>key;
cout<<endl;
vector<int> ans;
 check(arr,key,ans);
for(int i= 0;i<ans.size();i++){
 cout<<ans[i]<<" ";
}
t--;
}
return 0;
}