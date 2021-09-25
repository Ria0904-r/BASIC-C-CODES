#include<iostream>
using namespace std;

int celToF(long C){
    return (C*9/5)+32;
}

int main(){
    long C;
    cin>>C;
    cout<<celToF(C)<<endl;
    return 0;
}
