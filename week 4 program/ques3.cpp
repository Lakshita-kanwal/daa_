#include<bits/stdc++.h>
using namespace std;


void check(vector<int>&A, vector<int>&B, vector<int>&ans, int n, int m){
int l = 0;
int r = 0;
 
for(int i = 0;i<m;i++){
if(r==m || l==n)return;
if(A[l] == B[r]){
ans.push_back(A[l]);
l++;
r++;
}
else if(A[l] <B[r]){
l++;
}
else{
r++;
}
}
}


int main(){
int t;
cout<<"enter no. of test cases = ";cin>>t;
while(t != 0){
int n,m;
cout<<endl<<"enter no. of elements 1 array = ";cin>>n;
vector<int>arr1(n);
for(int i = 0;i<n;i++){
cin>>arr1[i];
}

cout<<endl<<"enter no. of elements 2 array = ";cin>>m;
vector<int>arr2(m);
for(int i = 0;i<m;i++){
cin>>arr2[i];
}
vector<int>ans;
check(arr1,arr2,ans,n,m);
cout<<"intersection " <<endl;
for(int i = 0;i<ans.size();i++){
cout<<ans[i]<<" ";
}
t--;
}
return 0;
}