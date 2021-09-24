#include<iostream>
using namespace std;

int countDigit(int x){
    int res=0;
    while(x>0){
        x=x/10;
        res++;
    }
return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<countDigit(x)<<endl;
    }
    return 0;
}
