#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cout<<"enter no. of test cases = ";cin>>t;
    while(t!=0){
        int n;
        cout<<"enter the no. of charecter = ";
        cin>>n;
        vector<char>s(n);
        cout<<"enter characters = ";
        for(int i = 0;i<n;i++){
            cin>>s[i];
        }
    
    int hash[256] = {0};
    for(int i = 0;i<s.size();i++){
    hash[s[i]]++;
    }
    int c=0;
    for(int i= 0;i<256;i++){
    if(hash[i] >1){
    c++;
    cout<<(char)(i)<<"="<<hash[i];
    cout<<endl;
    }
    }
    if (c==0){
    cout<<"No duplicates"<<endl;
    }
    t--;
    }
    return 0;
    }
    