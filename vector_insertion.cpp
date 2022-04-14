#include <iostream>
#include <bits/stdc++.h>
#include <vector>

//insert the  given array elements to  vector

using namespace std;

vector<int> fillVector(int arr[],int n){
    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(arr[i]);
    }
    return v;
}






int main()
{
 int t;
 cin>>t;
 
 while(t--){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    vector<int> res =fillVector(arr,n);
    for(auto x : res){
        cout<<x<<" ";
    cout<<endl;    
    }
 }
 

    return 0;
}
